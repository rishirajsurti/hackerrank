#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
ll n, m;
vi a;

int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		a.assign(n+1, 0);

		for(ll i = n; i >= 1; scanf("%lld", &a[i--]));
		vi sum(n+1,0), dp(n+1,0);

		sum[0] = 0;
		for(ll i = 1; i <= n; i++)
			sum[i] = sum[i-1] + a[i];

		dp[0] = 0;
		dp[1] = a[1];
		dp[2] = a[1]+a[2];
		dp[3] = a[1]+a[2]+a[3];

		for(ll i = 4; i <= n; i++){
			dp[i] = a[i] + (sum[i-1] - dp[i-1]);

			m = a[i] + a[i-1] + (sum[i-2] - dp[i-2]);

			dp[i] = max(dp[i], m);

			m = a[i] + a[i-1] + a[i-2] + (sum[i-3] - dp[i-3]);

			dp[i] = max(dp[i], m);

		}
		
		printf("%lld\n", dp[n]);
	}
}
/*#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n;
vi a;

int maxthree(int x, int y, int z){
	return max(x, max(y,z));
}

int minthree(int x, int y, int z){
	return min(x, min(y,z));
}

int solve(int from, int to, int me, int you, int turn){

	if(from < 0 || from >= n || to < 0 || to >= n)
		return -99999;

	if(from == to)
		return a[from]; //base case;

	if(turn == 0){
		//my turn
		//three cases
		return maxthree(a[from] + solve(from+1, to, me, you, 1-turn),
		a[from]+a[from+1]+solve(from+2, to, me, you , 1-turn),
		a[from]+a[from+1]+a[from+2]+solve(from+3, to, me, you , 1-turn));
		
	}
	else{
		//your turn
		//three cases
		return maxthree(solve(from+1, to, me, you+a[from], 1-turn),
		solve(from+2, to, me, you+a[from]+a[from+1] , 1-turn),
		solve(from+3, to, me, you+a[from]+a[from+1]+a[from+2], 1-turn));
	}
}


int main(){
	int t; scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		a.assign(n, 0);

		for(int i = 0; i < n; scanf("%lld", &a[i++]));
		
		int ans = solve(0, n-1, 0, 0, 0);
		printf("%lld\n", ans);
		//from, to, me, you, whose turn? 0=me
	}
}*/