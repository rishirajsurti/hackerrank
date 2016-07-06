#include <bits/stdc++.h>
using namespace std;
int n;
int **g;

void rotatematrix(int a, int b, int m, int n, int **mat)
{
    int row = a, col = b;
    int prev, curr;
 
    /*
       row - Staring row index
       m - ending row index
       col - starting column index
       n - ending column index
       i - iterator
    */
    while (row < m && col < n)
    {
 
        if (row + 1 == m || col + 1 == n)
            break;
 
        // Store the first element of next row, this
        // element will replace first element of current
        // row
        prev = mat[row + 1][col];
 
         /* Move elements of first row from the remaining rows */
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
 
        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
 
         /* Move elements of last row from the remaining rows */
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
 
        /* Move elements of first column from the remaining rows */
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
 
    
}


int main(){
	scanf("%d", &n);
	g = new int*[n];
	for(int i=0; i<n; i++)
		g[i] = new int[n];

	int count = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			g[i][j] = count++;
		}
	}

	int s; scanf("%d", &s);
	int a,b,d;
	for(int i = 0; i < s; i++){
		scanf("%d %d %d", &a, &b, &d);
		--a; --b;
		rotatematrix(a, b, a+d, b+d, g);
	}

	int l; scanf("%d", &l);
	for(int i = 0; i < l; i++){
		int u;
		scanf("%d", &u);
		int ai, aj;
		for(int i =0 ; i < n; i++){
			for(int j= 0; j < n; j++){
				if(g[i][j] == u){
					ai = i; aj = j;
				}
			}
		}
		printf("%d %d\n", ++ai, ++aj);
	}
	return 0;
}