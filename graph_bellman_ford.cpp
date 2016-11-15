#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int V, E, a, b, w, s;

//vector<vii> adj;

int adj[500][500];
int main(){
	scanf("%d %d", &V, &E);
	for(int i = 1; i <= V; i++){
		for(int j = 1; j <= V; j++){
			adj[i][j] = 1e6;
		}
		adj[i][i] = 0;

	}
//	adj.assign(V, vii());

//	vector< pair<int, ii> > EdgeList;

	for(int i = 0; i < E; i++){
		scanf("%d %d %d", &a, &b, &w);
		adj[a][b] = w;
//		--a; --b;
/*		adj[a].push_back(ii(b, w));
		adj[b].push_back(ii(a, w));
*/		
//		EdgeList.push_back(make_pair(w, ii(a,b)));
	}
//	scanf("%d", &s);
//	--s;

	for(int k = 1; k <= V; k++)
		for(int i = 1; i <= V; i++)
			for(int j = 1; j <= V; j++)
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

	int q; scanf("%d", &q);
	for(int i =0 ;i < q; i++){
		scanf("%d %d", &a, &b);
//		cout << adj[a][b] << endl;
		printf("%d\n", adj[a][b] == 1e6 ? -1 : adj[a][b]);
	}
	return 0;
}