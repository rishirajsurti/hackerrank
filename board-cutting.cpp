#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		llong m, n; scanf("%lld %lld", &m, &n);
		vector<llong> y(m-1,0), x(n-1,0);
		llong i,j;
		priority_queue<pair<llong, char> > pq;
		for(i=0; i<m-1; i++){ 
			scanf("%lld", &y[i]);
			pq.push(make_pair(y[i], 'y')); //y horizontal
		}
		for(i=0; i<n-1; i++){
			scanf("%lld", &x[i]);
			pq.push(make_pair(x[i], 'x'));
		}
		
		llong hparts=1, vparts = 1, ans = 0;
		
		while(!pq.empty()){
			pair<llong, char> front = pq.top(); pq.pop();

			if(front.second == 'y'){
				//cut horizontally
				ans += front.first * vparts;
				hparts++;

			} else if(front.second == 'x'){
				ans += front.first * hparts;
				vparts++;
			}
		}
		printf("%lld\n", ans);

	}
}