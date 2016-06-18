#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull; 
ull n, m;
vector<ull> coins;

ull dp[300];

void count(){
	ull i,j;
	for(i=0; i<coins.size(); i++){
		for(j=coins[i]; j<300; j++)
			dp[j] += dp[j-coins[i]];
	}
}
int main(){
	memset(dp, 0, sizeof 0);
	dp[0] = 1;
	scanf("%llu %llu", &n, &m);
	ull i;
	coins.assign(m,0);
	for(i=0; i<m; scanf("%llu", &coins[i++]));
	count();
	printf("%llu\n", dp[n]);
	return 0;
}