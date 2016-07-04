#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
typedef unsigned long long llu;
vector<llu> a;
map<llu, llu> m;

int main(){
	llu n; scanf("%lld", &n);

	a.assign(n, 0);
	
	for(llu i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	
	llu l, r;
	
	scanf("%lld %lld", &l, &r);
	
	m[0] = 1;
	for(llu i = 0; i < n; i++){
		for(llu j = a[i]; j <= (r+1); j++)
			m[j] += m[j-a[i]];
	}
	
	llu ans = 0;
	for(llu i = l; i <=r; i++)
		ans = (ans + m[i])%M;

	printf("%lld\n",(ans % M));
	return 0;
}