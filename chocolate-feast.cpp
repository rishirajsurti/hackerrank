#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,c,m; scanf("%d %d %d", &n, &c, &m);
		int ans = 0, wrappers = 0;
		ans = n/c;
		wrappers = ans;
		while(wrappers >= m){
			int choc = wrappers / m; // number of chocolates
			ans += choc; // 
			
			wrappers -= choc*m; // reduced number of wrappers
			wrappers += choc; // new chocs;
		}
		printf("%d\n", ans);
	}
	return 0;
}