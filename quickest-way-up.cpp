#include <bits/stdc++.h>
using namespace std;

#define INF 1e6
typedef vector<int> vi;
typedef pair<int, int> ii;

vector<vi> adj;

int main(){

	int t; scanf("%d", &t);
	while(t--){
		vi climb;
		climb.assign(101, 0);

		adj.assign(101, vi());
		int n,m; 

		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			int u, v;
			scanf("%d %d", &u, &v);
			adj[u].push_back(v);
			climb[u] = 1;
		}

		scanf("%d", &m);
		for(int i = 0; i < m; i++){
			int u, v;
			scanf("%d %d", &u, &v);
			adj[u].push_back(v);
			climb[u] = -1;
		}

		for(int i = 1; i <= 94; i++){
			//no snake or ladder defined
			if(adj[i].empty()){
				for(int j = 1; j <= 6; j++){
					adj[i].push_back(i+j);
				}
			}
		}
		if(adj[95].empty())
			for(int j = 1; j <= 5; j++)
				adj[95].push_back(95+j);
		if(adj[96].empty())
			for(int j = 1; j <= 4; j++)
				adj[96].push_back(96+j);
		if(adj[97].empty())
			for(int j = 1; j <= 3; j++)
				adj[97].push_back(97+j);		
		if(adj[98].empty())
			for(int j = 1; j <= 2; j++)
				adj[98].push_back(98+j);
		if(adj[99].empty())
			for(int j = 1; j <= 1; j++)
				adj[99].push_back(99+j);	

		vi moves;
		moves.assign(101, INF);
		int s = 1;
		moves[s] = 0;
		priority_queue<ii, vector<ii>, greater<ii> > pq;
		pq.push(ii(s, moves[s]));
		
		while(!pq.empty()){
			
			ii u = pq.top(); pq.pop();
			
			if(climb[u.first] == 1) {
				//ladder;
				int v = adj[u.first][0];
				moves[v] = moves[u.first];
				pq.push(ii(v, moves[v]));
			}
			else{

			for(int i = 0; i < adj[u.first].size(); i++){
				int v = adj[u.first][i];
				if(climb[v] != -1 && moves[u.first] + 1 < moves[v]){
					moves[v] = moves[u.first] + 1; //rolls of die
					pq.push(ii(v, moves[v]));
				}
			}
			}
		}

		if(moves[100] == INF)
			printf("-1\n");
		else
			printf("%d\n", moves[100]);
		}	
		return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

adj list, queue
ladder, snake included in adj list, ie directed edge
store only one edge for ^

start at 1, 
for dice 1 to 6
store in queu


typedef pair<int, int> ii;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m, i, j;
		vector<int> a(101, 0);
		//+(node) for ladder, -(node) for snake;
		int x,y;
		scanf("%d", &n);
		for(i=0; i<n; i++){
			scanf("%d %d", &x, &y);
			a[x] = y;
		}

		scanf("%d", &m);
		for(i=0; i<m; i++){
			scanf("%d %d", &x, &y);
			a[x] = -y;
		}

		int start = 1;
		priority_queue<ii> pq;
		pq.push(ii(1,0));
		int ans=1e6;
		bool soln = false;

		while(!pq.empty()){
			ii front = pq.top(); pq.pop();
			if(front.first == 100){
				ans = min(ans, front.second);
			//	soln = true;
			//	break;
			} else if(front.first <=100){
				int tm = front.second;
				int dist;
				if(a[front.first] == 0){
					// no snake or ladder
					for(dist=1; dist<=6; dist++)
						pq.push(ii(front.first+dist, tm+1));
				} else{
					if(a[front.first] > 0){
						// ladder
						pq.push(ii(a[front.first], tm+1));
					} 
				}
			}
		}
		if(soln) printf("%d\n", ans);
		else	printf("-1\n");
		
	}
	return 0;
}*/