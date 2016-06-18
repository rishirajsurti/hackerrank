#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define DFS_WHITE -1
#define DFS_BLACK 1

typedef pair<int, int> ii;
typedef vector<int> vi;
vector<vi> adj;
vi dfs_num;
int cursize;

void dfs(int u){
	dfs_num[u] = DFS_BLACK;
	cursize++;
	for(int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		if(dfs_num[v] == DFS_WHITE)
			dfs(v);
	}
	
}

int main(){
	int n; scanf("%d", &n);
	adj.assign(2*n, vi());
	int g,b;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &g, &b);
		--g; --b;
		adj[g].push_back(b);
		adj[b].push_back(g);
	}

	dfs_num.assign(2*n, DFS_WHITE);
	int ansmin= 1e6, ansmax = -1;
	for(int i = 0; i < 2*n; i++){
		if(dfs_num[i] == DFS_WHITE){
			cursize = 0;
			dfs(i);
			if(cursize != 1){
				ansmax = max(ansmax, cursize);
				ansmin = min(ansmin, cursize);
			}
			//cout<<dfs(i)<<endl;
		}
	}
	printf("%d %d\n", ansmin, ansmax);
	return 0;
}