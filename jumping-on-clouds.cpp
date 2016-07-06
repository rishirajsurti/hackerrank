#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> c(n);
	for(int i = 0; i < n; scanf("%d", &c[i++]));
	//ci = 0, ord, ci = 1 thunder
	int E = 100;
	int cur = 0;
	cur = (cur+k)%n;
	E = E - (c[cur]==0) - 3*(c[cur]==1);
	while(cur!=0){
		cur = (cur+k)%n;
		E = E - (c[cur]==0) - 3*(c[cur]==1);
	}
	printf("%d\n", E);
	return 0;
}