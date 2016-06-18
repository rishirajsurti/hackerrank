#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int i,even_count=0, odd_count =0;
	map<char, int> m;
	int sz = s.size();
	for(i=0; i<sz; i++){
		++m[s[i]];
		if(m[s[i]]&1)
			odd_count++;
		else
			odd_count--, even_count++;
	}
	if(sz&1){
		if(odd_count==1)
			printf("YES\n");
		else
			printf("NO\n");
	} else{
		if(odd_count==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}