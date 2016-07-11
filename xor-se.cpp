#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
const ll N = 1e15+10;
map<ll, ll> A;
int main(){
	int t; scanf("%d", &t);
	A[0] = 0;
	for(int i = 1; i < 1048576; i++){
		A[i] ^= A[i-1];
	}
	while(t--){
		ll ans = 0;
		ll l, r;
		scanf("%lld %lld", &l, &r);
		if((r-l)%2 == 0){
			//number of terms  is odd;
			ans = A[l];
			for(ll i = l+2; i <= r; i+=2)
				ans ^= i;

		}else{
			for(ll i = l+1; i <= r; i+=2)
				ans ^= i;
		}
		printf("%lld\n", ans);
	}
	return 0;
}