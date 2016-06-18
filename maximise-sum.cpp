#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;

llu max(llu a, llu b){
	return (a > b ? a : b ); 
}
int main(){
	llu t; scanf("%llu", &t);
	while(t--){
		llu n,m;
		scanf("%llu %llu", &n, &m);
		vector<llu> a(n,0);
		llu i,j,k;
		for(i=0; i<n; scanf("%llu", &a[i++]));

		llu ans = -1;
		/*for(i=0; i<(1<<n); i++){
			llu sum = 0;
			for(j=0; j<n; j++){
				if(i & (1<<j))
					sum+=a[j];
			}
			ans = max(ans, sum%m);
		}*/
		/*llu length;
		for(length = 1; length <=n; length++){
			for(i=0; i<n; i++){
				llu sum =0;
				for(j=0; j<length && (i+j < n); j++)
					sum+=a[i+j];

				ans = max(ans, sum%m);
			}
		}*/
		for(i=0; i<n; i++){
			for(j=0; j<=i; j++){
				llu sum = 0;
				for(k=j; k<=i; k++)
					sum+=a[k];
				ans = max(ans, sum % m);
			}
		}
		printf("%llu\n", ans);
	}
	return 0;
}