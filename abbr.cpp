#include <bits/stdc++.h>
using namespace std;
/*
1. Upper case letters already there.
2. If not
*/
bool isUpper(char c){
	return (c >= 'A' && c <= 'Z');
}
bool isLower(char c){
	return (c >= 'a' && c <= 'z');
}

bool solve(string a, string b){
	int n = a.length(), m = b.length();
	map<char, int> ma, mb;
	for(int j = 0; j < m; ++mb[b[j++]]);
	for(int i = 0; i < n; i++){
		if(isUpper(a[i])){
			if(mb.find(a[i]) != mb.end())
 				++ma[a[i]];
			else return false; // upper case not in B, cannot match.
		}
		else if(toupper(a[i]))
	}


}

int main(){
	int q; scanf("%d", &q);
	while(q--){
		string a, b;
		cin>>a >> b;
		printf("%s\n", solve(a,b) ? "YES": "NO");
	}
	return 0;
}