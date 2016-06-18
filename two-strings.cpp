#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string a, b;
		map<char, int > m;
		cin>>a;
		cin>>b;
		int i;
		bool ok = false;
		for(i=0; i<a.size(); i++){
			++m[a[i]];
		}
		for(i=0; i<b.size(); i++){
			if(m[b[i]])
				ok = true;
		}
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}