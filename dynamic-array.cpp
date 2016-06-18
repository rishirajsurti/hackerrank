#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	vector<vi> adj;
	adj.assign(n, vi());
	int i;
	int lastAns =0;
	for(i=0; i<q; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		
		if(a==1){
			int seq = (b^lastAns) % n;
			adj[seq].push_back(c);
		} 
		else if(a==2){
			int seq = (b^lastAns) % n;
			int sz = adj[seq].size();
			lastAns = adj[seq][c%sz];
			printf("%d\n",lastAns );
		}
	}
	return 0;
}