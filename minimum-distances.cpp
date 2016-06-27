#include <queue>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define INF 1e9
int main(){
	int n; scanf("%d", &n);
	map<int, int> m; //key->index 
	//vector<priority_queue<int> > pq;
	
	int ans = INF;
	for(int i = 0; i < n; i++){
		int u; scanf("%d", &u);
		if(m.find(u) == m.end())
			m[u] = i;
		else{
			//last found at m[u];
			ans = min(ans, i-m[u]);
			m[u] = i;
		}
	}

	printf("%d\n", ((ans == INF) ? -1 : ans));
	return 0;
}