//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull n,m; scanf("%llu %llu", &n, &m);
	vector<ull> a(n,0);
	ull i,aa,b,k,j, maxe = -1;
	for(i=0; i<m; i++){
		scanf("%llu %llu %llu", &aa, &b, &k);
		for(j=aa; j<=b; j++){ 
			a[j]+=k;
			maxe = max(maxe, a[j]); 
		}
	}
//	ull idx = max_element(a.begin(), a.end()) - a.begin();
	printf("%llu\n", maxe);
	return 0;
}