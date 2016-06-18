#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	vector<string> a;
	string s;
	int i,j;
	for(i=0; i<n; i++){
		cin>>s; a.push_back(s);
	}

	for(i=1; i<n-1; i++){//not on the edges
		for(j=1; j<a[i].size()-1; j++){
			if(((a[i][j]-'0') > a[i-1][j]-'0') && (a[i][j]-'0' > a[i+1][j]-'0') 
				&& (a[i][j]-'0' > a[i][j-1]-'0') && (a[i][j]-'0' > a[i][j-1]-'0'))
				a[i][j] = 'X';
		}
	}
	for(i=0; i<n; i++)
		cout<<a[i]<<endl;
	return 0;
}