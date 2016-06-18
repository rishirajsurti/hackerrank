#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

typedef vector<int> vi;

priority_queue<int, vector<int>, greater<int> > pq;
// sort in increasing order;

int main(){
	int n,k,c;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", &c);
		pq.push(c);
	}

	int ans = 0;
	bool poss = true;

	while(poss){
		if(pq.top() >= k)
			break;
		if(pq.empty() || pq.size() < 2){
			poss = false;
			break;
		} else {
			int nc1 = pq.top(); pq.pop();
			int nc2 = pq.top(); pq.pop();
			pq.push(nc1 + 2*nc2);
			ans++;
		}
	}
	if(poss)
		printf("%d\n", ans);
	else
		printf("-1\n");
	return 0;
}