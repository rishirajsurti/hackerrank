#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ; scanf("%d", &n);
		vector<int> a(n+1), b(n+1);
		for(int i = 1; i <= n ; scanf("%d", &b[i++]));

		int ans = 0;
		bool ok = true;
		for(int i = n; i >= 1 && ok; i--){
			if(b[i] - i > 2)
				ok = false;
			else{
				for(int j = max(1, b[i]-2); j < i; j++){
					if(b[j] > b[i]) ans++;
				}
			}
		}
	/*	map<int, int> m;
		for(int i = 1; i <= n; i++){
			a[i] = i;
			scanf("%d", &b[i]);
			m[b[i]] = i; //e.g. 5 4 3 2 1
			// m[5] = 1;
		}
		bool ok = true;
		int ans = 0;
		for(map<int, int>::iterator it = m.begin(); it != m.end() && ok; it++){
			if(abs(it->first - it->second) > 2)
				ok = false;
			else
				ans += abs(it->first - it->second);
		}*/
		if(ok)
			printf("%d\n", ans);
		else
			printf("Too chaotic\n");
	}
	return 0;
}