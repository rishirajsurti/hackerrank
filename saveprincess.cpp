#include <bits/stdc++.h>
using namespace std;

#define INF 1e6
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

int main(){
	int n; scanf("%d", &n);
	vector<string> a(n);
	int i,j;
	int mx, my, px, py;
	for(i=0; i<n; i++){ 
		cin>>a[i];
		for(j=0; j<n; j++){ 
			if(a[i][j]=='m'){ 
				mx = i; my = j;
			}
			if(a[i][j] == 'p'){
				px = i; py = j;
			}
		}
	}
//	for(i=0; i<n; i++) cout<<a[i]<<endl;
	vector< vector<int> > dist, p;
	dist.assign(n, vector<int>());
	p.ass
	for(i=0; i<n; i++) dist[i].assign(n, INF);

}