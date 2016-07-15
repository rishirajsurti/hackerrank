#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		vi a(n+4, 0);
		// 1 3 5 7 .. 1 bits
		// 0 2 4 6 .. 0 bits
		a[0] = 1; //have atleast one 0 bit at start;

		for(ll i = 1; i <= n; scanf("%lld", &a[i++]));
		
		if(n & 1){
			//n odd; a[n] 1 bits
			//000..(a[n-1]) 111...a[n] to
			//000(a[n-1]-1) 1 0 1111..a[n]-1
			ll ob = a[n]; // one bits;
			ll zb = a[n-1]; //zero bits;
			a[n-1]--; // 
			a[n] = 1;  // one 1 bit
			a[n+1] = 1;// one 0 bit
			a[n+2] = ob - 1; // reduce one bits by 1
		}
		else{	
			//n even; a[n] 0 bits;
			//a[n-1] 1 bits
			a[n+2] = a[n]; //0 bits;

			ll ob = a[n-1]; // one bits;
			ll zb = a[n-2]; //zero bits;
			a[n-2]--; // 
			a[n-1] = 1;  // one 1 bit
			a[n] = 1;// one 0 bit
			a[n+1] = ob - 1; // reduce one bits by 1

		}
		
		printf("%lld\n", n+2);
		for(ll i = 1; i <= n+2; i++){
			if(i > 1) printf(" ");
			printf("%lld", a[i]);
		}
		printf("\n");
	}
}