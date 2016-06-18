#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;

int main(){
	llu n,k,i,j;
	scanf("%llu %llu", &n, &k);
	vector<llu> a(n,0), b(3*n, 0);
	for(i=0; i<n; i++){ 
		scanf("%llu", &a[i]);
		
	}
	sort(a.begin(), a.end());
	llu ans =1e6;
	for(i=0; i<n; i++){
		if(i+k-1 < n){
			ans = min(ans, a[i+k-1] - a[i]);
		}
		else break;
	}
	printf("%llu\n", ans);
	return 0;
}