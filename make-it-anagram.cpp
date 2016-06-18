#include <bits/stdc++.h>
using namespace std;

int main(){
	string f,s;
	cin>>f;
	cin>>s;
	int i,j;
	map<char, int> mf, ms,m;
	vector<char> a;
	int ans;
	for(i=0; i<f.size(); i++){
		if(!m[f[i]]) a.push_back(f[i]), m[f[i]]=1;
		
		if(!mf[f[i]])
			mf[f[i]] = 1;
		else
			++mf[f[i]];
	}	

	for(i=0; i<s.size(); i++){
		if(!m[s[i]]) a.push_back(s[i]), m[s[i]] = 1;
	
		if(!ms[s[i]])
			ms[s[i]] = 1;
		else
			++ms[s[i]];
	}

	for(i=0; i<a.size(); i++){
		if(!mf[a[i]]) ans+= ms[a[i]];
		else if(!ms[a[i]]) ans+= mf[a[i]];
		else if(mf[a[i]]!=ms[a[i]]) ans+= abs(ms[a[i]]-mf[a[i]]);
	}
	printf("%d\n", ans);
	return 0;
}