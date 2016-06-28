#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <map>
#include <cstdio>
using namespace std;

//(ii, ii) dist, times waved, x, y
#define INF 1e6

char a[101][101];
int dist[101][101];
int n,m,k;
int d[4][2] = {	{1, 0}, {-1, 0}, {0, 1}, {0, -1} };

int si, sj, ti, tj; //source, target;
int cnt;

bool ok(int x, int y){
	return (x>=0 && x<n && y>=0 && y<m);
}

bool dfs(int x, int y, int px = -1, int py = -1){
//	cout<<"dfs"<<endl;
	if(a[x][y] == '*')
		return 1;
	int cc = 0; 
	bool fl = 0;

	for(int i = 0; i < 4; i++){
		int nx = x + d[i][0];
		int ny = y + d[i][1];

		if(!ok(nx,ny))
			continue;
		if(nx==px && ny ==py)
			continue;
		if(a[nx][ny] == 'X')
			continue;
		if(dfs(nx, ny, x, y))
			fl = 1;
		++cc; // times had to choose between paths.
	}

	if(fl && cc > 1)
		++cnt;
	return fl;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){

		scanf("%d %d\n", &n, &m);
		for(int i = 0; i < n; i++){

			for(int j = 0; j < m; j++){
				cin>>a[i][j];
//				cout<<a[i][j]<<" ";
				if(a[i][j] == 'M'){
					si = i; sj = j;
				} else if(a[i][j] == '*'){
					ti = i; tj = j;
				}}
		}
		cin>>k;

//		scanf("%d", &k);
		cnt = 0;
		dfs(si, sj);
		if(cnt == k)
			cout<<"Impressed"<<endl;
		else
			cout<<"Oops!"<<endl;
	}
	return 0;
}