#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
llu dp[100];

int main(){
	llu a, b, n;
	scanf("%llu %llu %llu", &a, &b, &n);
	memset(dp, 0, sizeof dp);
	dp[1] = a;
	dp[2] = b;
	llu i;
	for(i=3; i<=n+1; i++){
		dp[i] = dp[i-1]*dp[i-1] + dp[i-2];
		printf("%llu->%llu\n",i, dp[i]);
	}
	printf("%llu\n", dp[n]);
	return 0;
}