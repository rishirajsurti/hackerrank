#include <bits/stdc++.h>
using namespace std;

int mod(char a, char b){
	return (a-b>0) ? (a-b) : (b-a);
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s, r;
		cin>>r;
		s = r;
		reverse(r.begin(), r.end());
		//cout<<r<<endl;
		bool ok = true;
		int i, sz = s.size();
		for(i=1; i<sz; i++){
			if(mod(s[i], s[i-1]) != mod(r[i], r[i-1]))
				ok = false;
		}
		if(ok) printf("Funny\n");
		else	printf("Not Funny\n");
	}
	return 0;
}