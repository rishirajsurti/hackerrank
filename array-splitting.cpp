#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<ll> a){
	if(a.empty()) return 0;
	ll n = a.size();
	ll sum = 0;
	sort(a.begin(), a.end());
	
	for(ll i =0; i < n; i++)
	{ sum += a[i]; }

	if(sum%2) return 0;

	ll sumA, sumB,i;
	sumA = sumB = sum/2;
	vector<ll> a1, a2;

	for(i = n-1; i >=0; i--){
		if(a[i] <= sumA) sumA -= a[i], a1.push_back(a[i]);
		else if(a[i] <= sumB) sumB -= a[i], a2.push_back(a[i]);
		else i -= 2;
	}
	if(i==-3) return 0;
	
	return 1+max(solve(a1), solve(a2));
}

int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		vector<ll> a(n);
		ll sum = 0;

		for(ll i =0; i < n; i++){
		 scanf("%lld", &a[i]);
		}

		ll ans = solve(a);
		printf("%lld\n", ans); 
	}	
	return 0;
}