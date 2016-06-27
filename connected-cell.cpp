#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int a[11][11];
int vis[11][11];
/* -1-1 -10  -11
	0-1	 ij  01
 	1-1  10 11
*/
 int m ,n;
int dr[] = {1, 1, 0,-1,-1,-1,0, 1 };
int dc[] = {0, 1, 1, 1, 0,-1,-1,-1};

int floodFill(int x, int y){
	vis[x][y] = 1;
	int ans =0;
	for(int i = 0; i < 8; i++){
		int nx,ny;
		nx = x + dr[i];
		ny = y + dc[i];
		if(nx>=0 && nx <m && ny>=0 && ny<n && a[nx][ny] && !vis[nx][ny])
			ans += 1+floodFill(nx, ny);
	}
	return ans;
}

int main(){
	scanf("%d %d", &m, &n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	memset(vis, 0, sizeof vis);
	int ans = -1;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] && !vis[i][j]){
				ans = max(ans, floodFill(i,j));
			}
		}
	}
	printf("%d\n", ++ans);
	return 0;

}