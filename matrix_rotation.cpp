#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int n, m, k;
int a[301][301];

/*void rotateSquare(){
	for(int x = 0; x < n/2; x++){
		for(int y = x; y < n-x-1; y++){
			int temp = a[x][y];
			a[x][y] = a[y][n-x-1];
			a[y][n-x-1] = a[n-x-1][n-y-1];
			a[n-x-1][n-y-1] = a[n-y-1][x];
			a[n-y-1][x] = temp;
		}
	}
}

void rotate(){
	int rowmin, rowmax, colmin, colmax, prev, curr;
	rowmin = colmin = 0;
	rowmax = n-1; colmax = m-1;
	int i;
	while(rowmin <= rowmax && colmin <= colmax){
//		if(rowmin + 1 == rowmax || colmin + 1 == colmax) break;
		prev = a[rowmin+1][colmin];

		for(i = colmin; i <= colmax; i++){
			curr = a[rowmin][i];
			a[rowmin][i] = prev;
			prev = curr;
		}
		rowmin++;

		for(i = rowmin; i <= rowmax; i++){
			curr = a[i][colmax];
			a[i][colmax] = prev;
			prev = curr;
		}
		colmax--;

		if(rowmin <= rowmax){
			for(i = colmax; i >= colmin; i--){
				curr = a[rowmax][i];
				a[rowmax][i] = prev;
				prev = curr;
			}
		}
		rowmax--;


		if(colmin <= colmax){
			for(i = rowmax; i >= rowmin; i--){
				curr = a[colmin][i];
				a[colmin][i] = prev;
				prev = curr;
			}
		}
		colmin++;

	}

}
*/

void rotate(){
	int rowmin, rowmax, colmin, colmax;

	rowmin = colmin = 0;
	rowmax = n-1;
	colmax = m-1;
	vector<int> e;
	int i;
	while(rowmin <= rowmax && colmin <= colmax){
		
		for(i = colmin; i <= colmax; i++)
			e.pb(a[rowmin][i]);
		rowmin++;

		for(i = rowmin; i <= rowmax; i++)
			e.pb(a[i][colmax]);
		colmax--;

		if(rowmin <= rowmax){
			for(i = colmax; i >= colmin; i--)
				e.pb(a[rowmax][i]);
			rowmax--;
		}

		if(colmin <= colmax){
			for(i = rowmax; i >= rowmin; i--)
				e.pb(a[i][colmin]);
			colmin++;
		}

		rotate(e.begin(), e.begin()+(k%e.size()), e.end());
		int ei = 0;

		rowmax++;
		colmin--;
		rowmin--; colmax++; 


		for(i = colmin; i <= colmax; i++)
			a[rowmin][i] = e[ei++];
		rowmin++;

		for(i = rowmin; i <= rowmax; i++)
			a[i][colmax] = e[ei++];
		colmax--;

		if(rowmin <= rowmax){
			for(i = colmax; i >= colmin; i--)
				a[rowmax][i] = e[ei++];
			rowmax--;
		}

		if(colmin <= colmax){
			for(i = rowmax; i >= rowmin; i--)
				a[i][colmin] = e[ei++];
			colmin++;
		}
		e.clear();
	}
}

int main(){
	scanf("%d %d %d", &n, &m, &k);
	int count =1 ;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
//			a[i][j] = count++;
		}
	}


	//rotateSquare();
	rotate();
	for(int i =0; i< n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}