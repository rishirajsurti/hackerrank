#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int V, E, a, b, w, s;

vector<vii> adj;

class UnionFind{
private:
	vi p, rank, setSize;
	int numSets;
public:
	UnionFind(int N){
		rank.assign(N, 1);
		setSize.assign(N, 1);
		p.assign(N, 0); for(int i = 0; i < N; i++) p[i] = i;
		numSets = N;
	}

	int findSet(int x){
		return p[x] == x ? x : p[x] = findSet(p[x]);
	}

	bool isSameSet(int x, int y){
		return findSet(x)==findSet(y);
	}

	void unionSet(int x, int y){
		x = findSet(x);
		y = findSet(y);
		if(!isSameSet(x, y)){
			numSets--;
			if(rank[x] > rank[y]){
				p[y] = x;
				setSize[x] += setSize[y];
			}
			else {
				p[x] = y;
				setSize[y] += setSize[x];
				if(rank[x] == rank[y]) 
					++rank[y];
			}
		}
	}

	int numDisjointSets(){
		return numSets;
	}

	int sizeOfSet(int i){
		return setSize[findSet(i)];
	}
};

int main(){
	
	scanf("%d %d", &V, &E);
	adj.assign(V, vii());

	vector< pair<int, ii> > EdgeList;

	for(int i = 0; i < E; i++){
		scanf("%d %d %d", &a, &b, &w);
		--a; --b;
/*		adj[a].push_back(ii(b, w));
		adj[b].push_back(ii(a, w));
*/		
		EdgeList.push_back(make_pair(w, ii(a,b)));
	}
	scanf("%d", &s);
	--s;

	/*
	vi dist(V, INT_MAX);
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	dist[s] = 0;
	pq.push(ii(dist[s], s));*/
	sort(EdgeList.begin(), EdgeList.end());	
	UnionFind uf(V);
	int ans = 0;
	for(int i = 0; i < EdgeList.size(); i++){
		w = EdgeList[i].first;
		a = EdgeList[i].second.first;
		b = EdgeList[i].second.second;
		if(!uf.isSameSet(a,b)){
			uf.unionSet(a,b);
			ans += w;
		}
	}
	cout << ans << endl;
	return 0;
}