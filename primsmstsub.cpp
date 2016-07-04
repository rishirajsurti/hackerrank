#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> adj;
vi taken;
priority_queue<ii, vector<ii>, greater<ii> > pq;

void process(int u){
	taken[u] = 1;
	for(int i = 0; i < adj[u].size(); i++){
		ii v = adj[u][i];
		if(!taken[v.first])
			pq.push(ii(v.second, v.first));
	}
}

int main(){
	int n, m; 
	scanf("%d %d" ,&n, &m);
	adj.assign(n, vii());
	taken.assign(n, 0);
	for(int u, v, w, i = 0; i < m; i++){
		scanf("%d %d %d", &u, &v, &w);
		--u; --v;
		adj[u].push_back(ii(v, w));
		adj[v].push_back(ii(u, w));
	}
	int s;
	scanf("%d", &s);
	--s;
	process(s);
	int ans = 0;
	while(!pq.empty()){
		ii v = pq.top(); pq.pop();
		if(!taken[v.second]){
			ans += v.first;
			process(v.second);
		}
	}

	printf("%d\n", ans);
	return 0;
}	