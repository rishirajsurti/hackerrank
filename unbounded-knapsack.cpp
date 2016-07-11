#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

typedef vector<int> vi;
int dp[2048][2048];
vi a;
int n,k; 

// consider k as weight, a[i] as value

//suppose last element of answer set is given.
//now two choices, move to next element, or repeat the previous element.
//keep track of which element is left
//state = (idx, k);

// if rem = 0, sum equal to k, return 0;
// 3 possibilities,
// either ignore item
// or take item, but don't change idx
// or take item, and go to next idx;

int solve(int idx, int rem){
	if(idx == n || rem == 0) return 0;

	if(dp[idx][rem] != -1) return dp[idx][rem];

	if(a[idx] > rem ) return solve(idx+1, rem);
	//if(rem < 0 || idx >= n) return -1e6; //can't select this set
	//if(rem = 0) return 0; //no more items needed;
	//either take same element or move to next
	return dp[idx][rem] = max(solve(idx+1, rem),
		a[idx]+max(solve(idx, rem-a[idx]), solve(idx+1, rem-a[idx])));
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		memset(dp, -1, sizeof dp);

		scanf("%d %d", &n, &k);

		a.assign(n, 0);

		for(int i = 0; i < n; scanf("%d", &a[i++]));

		//start with element 0, remaining k;
		int ans = solve(0, k);
		printf("%d\n", ans);
		a.clear();
	}
	return 0;
}