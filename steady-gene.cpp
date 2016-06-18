#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	string s;
	cin>>s;
	map<char, int> m;
	int c = n/4;
	int i;
	int ans = 0;
	for(i=0; s[i]; i++)
		m[s[i]]++;

	if(!m['A']){
		ans+=c;
	} else {
		ans += min(m['A'] % c, c - (m['A'] % c));
	}

	if(!m['G']){
		ans+=c;
	} else {
		ans += min(m['G'] % c, c - (m['G'] % c));
	}

	if(!m['C']){
		ans+=c;
	} else {
		ans += min(m['C'] % c, c - (m['C'] % c));
	}

	if(!m['T']){
		ans+=c;
	} else {
		ans += min(m['T'] % c, c - (m['T'] % c));
	}
	printf("%d\n", ans);
	return 0;
}