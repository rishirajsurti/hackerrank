#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
vector<vi> adj;
vi value, sum;
int total;
vi visited;

int dfs(int u){
	visited[u] = 1;
	int ret = 0;
	for(int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		if(visited[v] == 0)
			ret += dfs(v);
	}

	return sum[u] = ret + value[u]; 
}

int main(){
	int best = INT_MAX;
	int n; 
	scanf("%d", &n);
	value.assign(n, 0);
	adj.assign(n, vi());
	total = 0;
	visited.assign(n, 0);
	sum.assign(n, 0);
	for(int i = 0; i < n; i++){
		scanf("%d", &value[i]);
		total += value[i];
	}

	for(int i = 0; i < n-1; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		--a; --b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	dfs(0);
	for(int i = 0; i < n; i++){
		if(abs((total-sum[i]) - sum[i]) < best)
			best = abs((total-sum[i]) - sum[i]);
	}
	cout<<best<<endl;
	return 0;
}