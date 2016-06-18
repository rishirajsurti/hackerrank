#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int ans = 0;
		int n2 = n;
		while(n>0){
			
			int mod;
			mod = n%10;
			if(mod != 0 && n2%mod == 0) ans++;
			n /= 10;
//			printf("n is %d\n", n);
		}
		printf("%d\n", ans);
	}
	return 0;
}