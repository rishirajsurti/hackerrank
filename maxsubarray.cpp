#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n,0);
		int i,j;
		for(i=0; i<n; i++) scanf("%d", &a[i]);
		int csum=0, ncsum=0, sum=0;

		for(i=0; i<n; i++){
			sum += a[i];
			if(sum > csum) csum = sum;
		}

		vector<int> dp(n,0);
		// dp[i] max sum ending at i;
		for(i=0; i<n; i++){

			for(j=0; j<i; j++){
				dp[i] = max(dp[i], dp[i]+a[j]);
				/*if(a[j]+dp[i] > dp[i])
					dp[i] += a[j];*/
			}
		}
		ncsum = *max_element(dp.begin(), dp.end());
		printf("%d %d\n", csum, ncsum);
	}
	return 0;
}