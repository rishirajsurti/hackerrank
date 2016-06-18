#include <bits/stdc++.h>
using namespace std;
#define INF 1e6

typedef vector<int> vi;
vector<vi> adj;


int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d %d", &n, &m);
		adj.assign(n, vi());
		vi dist;
		dist.assign(n, INF);

		int i,j, x, y;
		for(i=0; i<m; i++){
			scanf("%d %d", &x, &y);
			--x; --y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int s; 
		scanf("%d", &s);
		--s;
		dist[s] = 0;
		queue<int> q;
		q.push(s);
		while(!q.empty()){
			int u = q.front(); q.pop();
			//printf("%d %d\n", u, dist[u]);
			for(i=0; i<adj[u].size(); i++){
				if(dist[u]+1 < dist[adj[u][i]]){
					dist[adj[u][i]] = dist[u]+1;
					q.push(adj[u][i]);
				}
			}
		}
		bool first = false;
		for(i=0; i<n; i++){
			if(i==s) continue;
			if(i>0 && first) printf(" ");
			printf("%d", ((dist[i]==INF) ? -1 : dist[i]*6));
			first = true;
		}
		printf("\n");
	}
	return 0;
}