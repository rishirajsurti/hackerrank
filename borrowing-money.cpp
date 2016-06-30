#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vi c; //coins

vector<vi> adj;

vector<bool> p; //present
priority_queue<ii> pq;
vi vis; //visited;
int houses;

int solve(int start){
	//printf("%d ", start);
	int ret;
	
	if(p[start]){
		ret = c[start];
		houses |= (1<<start);
	}
	else
		ret = 0;

	vis[start] = 1;
	for(int i = 0; p[start] && i< adj[start].size(); i++){
		p[adj[start][i]] = false;
	}

	for(int i = 0; i < adj[start].size(); i++){
		int v = adj[start][i];
		if(!vis[v])
			ret += solve(v);
	}

	return ret;
}

int main(){
	int n, m; 
	scanf("%d %d", &n, &m);
	c.assign(n, 0);
	for(int i = 0; i < n; scanf("%d", &c[i++]));
	
	adj.assign(n, vi());
	for(int i = 0; i < m; i++){
		int u,v; 
		scanf("%d %d", &u, &v);
		--u; --v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i = 0; i < n; i++){
		p.clear(); p.assign(n, true);
		vis.clear(); vis.assign(n, 0);
		
		houses = 0;
		int collected = solve(i);
		for(int j = 0; j < n; j++){
			if(!vis[j])
				collected+= solve(j);
		}
		pq.push(ii(collected, houses)); //start with i
	}

	ii ans1 = pq.top();
	int ans2 = 1;
	pq.pop();
	while(!pq.empty() && ans1.first == pq.top().first){
		if(ans1.second == pq.top().second){
			//don't count
			ans1 = pq.top(); pq.pop();
		}
		else{
			//different houses
			ans1 = pq.top();
			ans2++; pq.pop();
		}
	}
	printf("%d %d\n", ans1.first, ans2);
	return 0;
}