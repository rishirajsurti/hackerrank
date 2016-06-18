#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int a[26];
	getline(cin, s);
//	cout<<s<<endl;
	int i;
	for(i=0; i<26; i++) a[i]=0;

	for(i=0; i<s.size(); i++){
		if((s[i]-'A')>=0 && (s[i]-'Z' <=0))
			a[s[i] - 'A'] = 1;
		else if((s[i] - 'a')>=0 && (s[i]-'z')<=0)
			a[s[i] - 'a'] =1;
	}
	bool ok = true;
	for(i=0; i<26; i++)
		if(!a[i]) ok = false;

	if(ok)	printf("pangram\n");
	else	printf("not pangram\n");

	return 0;
}