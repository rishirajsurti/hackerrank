#include <bits/stdc++.h>
using namespace std;

bool isPalin(string s){
	string r;
	r = s;
	reverse(r.begin(), r.end());
	return (s==r);
}
int main(){
	string s;
	cin>>s;
	int n = s.size();
	vector<int> a(26,0);

	int i;
	for(i=0; i<n; i++)
		a[s[i]-'a']++;
	int odd = 0, even = 0;
	for(i=0; i<n; i++){
		if(a[i] & 1) odd++;
		else	even++;
	}
	bool ok = true;
	if(n&1){
		// n odd
		if(odd != 1) ok = false;
	}
	else {
		if(odd != 0) ok = false;
	}
	/*int i,sz = s.size();
	sort(s.begin(), s.end());
	bool ok = false;
	
	do{
		cout<<s<<endl;
		if(isPalin(s)){
			ok = true; 
			break;
		}
	} while(next_permutation(s.begin(), s.end()));
	*/
	if(ok) printf("YES\n");
	else	printf("NO\n");
	return 0;
}