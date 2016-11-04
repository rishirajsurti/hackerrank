#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n,k;
vi a, li, lu;

int ans;
/*
int getMin(vi &li, vi &lu){
	int ret = 0;
	for(int i = 0; i < li.size(); i++){
		for(int j = 0; j < lu.size(); j++){
			ret += abs(li[i]-lu[j]);
		}
	}
	return ret;
}

void solve(int K, int L, int idx){
	if(idx == n){
		ans = min(ans, getMin(li, lu));
		return;
	}
	if(K == 0){
		lu.push_back(a[idx]);
		solve(K, L-1, idx+1);
		lu.pop_back();
	}
	else if(L == 0){
		li.push_back(a[idx]);
		solve(K-1, L, idx+1);
		li.pop_back();
	}
	else{
		lu.push_back(a[idx]);
		solve(K, L-1, idx+1);
		lu.pop_back();	

		li.push_back(a[idx]);
		solve(K-1, L, idx+1);
		li.pop_back();
	}
}
*/

int solve(){
	if(2*k > n) k = n-k;
	sort(a.begin(), a.end());
	int first = 0;
	int z, o, zo;
	zo = k;
	z = (n-k)/2;
	for(int i = 0; i < k ; i++){
		first <<= 1;
		first
	}

}


int main(){
	scanf("%d %d", &n, &k);
	a.clear(); a.assign(n, 0);
	li.clear(); lu.clear();

	for(int i = 0; i < n; scanf("%d", &a[i++]));
	ans = INT_MAX;
	//solve(k, n-k, 0);
	
	printf("%d\n",ans );
	
	return 0;
}