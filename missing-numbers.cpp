#include <algorithm>
#include <queue>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	vector<int> a(n);
	map<int, int> ma, mb;
	priority_queue<int, vector<int>, greater<int> > pq;

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		ma[a[i]]++;
	}

	int m; scanf("%d", &m);
	vector<int> b(m);
	for(int i = 0; i < m ; i++){
		scanf("%d", &b[i]);
		mb[b[i]]++;

	}
	for(int i =0 ; i < m ; i++){
		if(mb[b[i]] > ma[b[i]]){
			pq.push(b[i]);
			ma[b[i]] = mb[b[i]];
		}
	}
	bool first = false;
	while(!pq.empty()){
		if(first) printf(" ");
		cout<<pq.top();
		pq.pop();
		first = true;
	}
	printf("\n");
	return 0;

}