#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
typedef long long llu;

typedef vector<llu> vi;
llu n, k;
int main(){
	scanf("%llu %llu",&n, &k);

	vi p(n);
	
	for(llu i = 0; i < n; i++)
		p[i] = i;
	
	llu ans = 0;
	for(llu i = 0; i < n-1; i++){
		llu a,b;
		scanf("%llu %llu", &a, &b);
		--a; --b;
		p[b] = a;
		if(abs(b-a) <= k) ans++;
		
		while(a != p[a]){
			a = p[a];
			if(abs(b-a) <= k)
				ans++;
		}
	}
	printf("%llu\n", ans);
	return 0;
}