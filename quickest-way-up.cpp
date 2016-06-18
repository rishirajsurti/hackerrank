#include <bits/stdc++.h>
using namespace std;

/*adj list, queue
ladder, snake included in adj list, ie directed edge
store only one edge for ^

start at 1, 
for dice 1 to 6
store in queu
*/

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
}