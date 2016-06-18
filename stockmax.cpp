#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> p;
int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll i;
		p.assign(n,0);
		for(i=0; i<n; scanf("%lld", &p[i++]));
		
		ll max_future_price = 0;
		ll profit = 0;
		
		for(i=p.size()-1; i>=0; i--){
			max_future_price = max(max_future_price, p[i]);
			profit += (max_future_price-p[i]);
		}
		printf("%lld\n", profit);
	}
	return 0;
}