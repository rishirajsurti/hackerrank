#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	int i,j;
	string s;
	map<char, int> m;
	int ans=0;
	for(i=0; i<n; i++){
		cin>>s;
		map<char, int> inc;

		for(j=0; j<s.size(); j++){
			if(!m[s[j]]){
				m[s[j]] = 1; //not in original map, insert it
				inc[s[j]]=1; // seen locally as well
 			} else{
				if(!inc[s[j]]){ // not incremented in this string
					m[s[j]]++; // ++ seen
					inc[s[j]]=1; // locally seen
					if(m[s[j]]==n) ans++;
				}
				else{
					//already accounted
					//no need to insert again
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}