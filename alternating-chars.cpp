#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s; cin>>s;
		int ans = 0;
		char prev;
		prev = s[0];
		int i;
		for(i=1; i<s.size(); i++){
			if(s[i] == prev)
				ans++;
			else
				prev = s[i];
		}
		printf("%d\n", ans);
	}
	return 0;
}