#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

typedef long long llu;

int main(){
	llu t; scanf("%lld", &t);
	while(t--){
		llu n; scanf("%lld", &n);
		vector<llu> h(n);
		for(llu i =0; i < n; scanf("%lld", &h[i++]));
		sort(h.begin(), h.end());
		
		vector<llu> s(n+1, 0);
		llu sum =0 ;
		for(llu i = n-1; i>=0; i--){
			sum += h[i];
			s[i] = sum; 
		}
		llu ans = 0;
		for(llu i = 0; i < n; i++){
			ans = max(ans, s[i]*(i+1));
		}

		printf("%lld\n", ans);
	}
	return 0;
}