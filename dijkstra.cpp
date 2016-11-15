#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int V, E, a, b, w, s;

vector<vii> adj;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &V, &E);
		adj.assign(V, vii());

		for(int i = 0; i < E; i++){
			scanf("%d %d %d", &a, &b, &w);
			--a; --b;
			adj[a].push_back(ii(b, w));
			adj[b].push_back(ii(a, w));
		}
		scanf("%d", &s);
		--s;
		vi dist(V, INT_MAX);
		priority_queue<ii, vector<ii>, greater<ii> > pq;
		dist[s] = 0;
		pq.push(ii(dist[s], s));

		while(!pq.empty()){
			ii v = pq.top(); pq.pop();
			a = v.second;
			w = v.first;
			if(dist[a] < w) continue;
			for(int j = 0; j < adj[a].size(); j++){
				ii u = adj[a][j];
				b = u.first;
				if(dist[a] + u.second < dist[b]){
					dist[b] = dist[a] + u.second;
					pq.push(ii(dist[b], b));
				}
			}
		}

		for(int i = 0; i < V; i++){
			if(i == s) continue;
			printf("%d ", dist[i]==INT_MAX ? -1 : dist[i]);
		}
		printf("\n");
	}
	return 0;
}