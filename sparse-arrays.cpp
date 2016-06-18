#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ; scanf("%d", &n);
	string s;
	map<string, int> m;
	int i;
	for(i=0; i<n; i++){
		cin>>s;
		m[s]++;
	}
	int q;
	scanf("%d", &q);
	for(i=0; i<q; i++){
		cin>>s;
		if(m.find(s) == m.end()){
			printf("0\n");
		}
		else
			cout<<m[s]<<endl;
	}
	return 0;
}