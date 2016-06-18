#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k; 
	scanf("%d %d", &n, &k);
	int p;
	priority_queue<int, vector<int>, greater<int> > pq;
	int ans =0,i;
	for(i=0; i<n; i++){
		scanf("%d", &p); pq.push(p);
	}
	while(!pq.empty() && k>=0){
		k -= pq.top();
	//	printf("%d %d\n", k,pq.top());
		pq.pop();
		if(k>=0)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}