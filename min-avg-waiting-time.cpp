#include <algorithm>
#include <queue>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
int main(){
	int n; scanf("%d", &n);
	int t,l;
	priority_queue<iii, vector<iii>, greater<iii> > pq;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &t, &l);
		pq.push(make_pair(l-t,ii(l,t))); //note l first, t second;
	}
	int cur_time = 0;
	int waiting_time = 0;
	while(!pq.empty()){
		ii u = pq.top(); pq.pop();
		cur_time += u.first; // time to make that pizza;
		waiting_time += (cur_time - u.second); //time at which that fellow arrived;	
	}

	printf("%d\n", waiting_time/n);
	return 0;
}