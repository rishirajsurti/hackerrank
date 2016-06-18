#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		string s;
		vector<string> vs;
		int i,j;
		scanf("%d", &n);
		for(i=0; i<n; i++){
			cin>>s; 
			sort(s.begin(), s.end());
			vs.push_back(s);
		}
		bool ok = true;
		for(j=0; j<n; j++){
			for(i=0; i<n-1; i++){
				if(vs[i][j]>vs[i+1][j])
					ok = false;
			}
		}
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}