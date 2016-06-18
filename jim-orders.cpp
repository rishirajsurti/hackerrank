#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;

int main(){
	int n; scanf("%d", &n);
	int i,j, t, d;
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	for(i=1; i<=n; i++){
		scanf("%d %d", &t, &d);
		pq.push(ii(t+d, i));
	}
	t=0;
	while(!pq.empty()){
		ii front = pq.top(); pq.pop();
		if(t>0) printf(" ");
		printf("%d", front.second);
		t =1;
	}
	printf("\n");
	return 0;
}