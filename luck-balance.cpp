#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; scanf("%d %d", &n, &k);
	priority_queue<int> pq;
	int ans = 0;
	for(int l, t, i = 0; i < n; i++){

		scanf("%d %d", &l, &t);
		if(t == 0) ans += l;
		else pq.push(l);
	}
	int cnt = 0;
	while(!pq.empty()){
		int v = pq.top();
		if(cnt < k){
			ans += v; //lost a contest
			cnt++;	//how many contests lost?
		}
		else{
			ans -= v;
		}
		pq.pop();
	}
	printf("%d\n", ans);
	return 0;
}