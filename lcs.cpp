#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
//  0  1
// -1

void print(int **x, int n, int m){
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
			printf("%3d", x[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	vi a(n, 0), b(m,0);

	for(int i = 0; i < n; scanf("%d", &a[i++]));
	for(int i = 0; i < m; scanf("%d", &b[i++]));
	int **x, **y;
	x = new int*[n+1];
	y = new int*[n+1];
	for(int i = 0; i <= n; i++){
		x[i] = new int[m+1];
		y[i] = new int[m+1];
	}

	for(int i = 0; i <= n; i++){
		x[i][0] = 0;
		y[i][0] = 0;
	}

	for(int j = 0; j <= m; j++){
		x[0][j] = 0;
		y[0][j] = 0;
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i-1] == b[j-1]){
		//		printf("1-> %d %d\n", a[i-1], b[i-1]);

				x[i][j] = x[i-1][j-1] + 1;
				y[i][j] = 0;
			}
			else{
				if(x[i-1][j] > x[i][j-1]){
		//			printf("2-> %d %d\n", a[i-1], b[i-1]);

					x[i][j] = x[i-1][j];
					y[i][j] = 1;
				}
				else{
		//			printf("3-> %d %d\n", a[i-1], b[i-1]);
					x[i][j] = x[i][j-1];
					y[i][j] = -1;
				}
			}
		}
	}

//	print(x, n, m);
//	print(y, n, m);
	vi c;
	/*int i = n, j = m; 
	while(i >= 0 && j >= 0){
		if(y[i][j] == 0){
			c.push_back(a[i-1]);
			i--; j--;
		}
		else{
			if(x[i-1][j] > x[i][j-1])
				i--;
			else
				j--;
		}
	}

	reverse(c.begin(), c.end());
	for(int i = 0; i < c.size(); i++){
		if(i > 0) printf(" ");
		printf("%d", c[i]);
	}*/

	int i = 1, j = 1;
	while(i <= n && j <= m){
		if(y[i][j] == 0){
			printf("%d ", a[i-1]);
			i++; j++;
		}
		else if(i <= n && j <= m && x[i+1][j] > x[i][j+1])
			i++;
		else
			j++;
	}
	return 0;
}