#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,k; 
		scanf("%d %d", &n, &k);
		//vector<int> a(n);
		int i, x, ans =0 ;
		for(i=0; i<n ; i++){
			scanf("%d", &x);
			if(x<=0) ans++;
		}
		//sort(a.begin(), a.end());
		//int ans = upper_bound(a.begin(), a.end(), 0)-a.begin();
		//ans++;
		printf("%s\n", ans >= k ? "NO" : "YES");
	}
	return 0;
}