#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		string rs = s;
		int i;
		reverse(rs.begin(), rs.end());
		if(s == rs) printf("-1\n");
		else{
		
		for(i=0; s[i]==rs[i]; i++);
		if(s[i+1] == rs[i]) printf("%d\n", i);
		else	printf("%d\n", s.size()-i-1);
		
		}
	}
	return 0;
}