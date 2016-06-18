#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s, s1, s2;
		cin>>s;
		int sz = s.size();
		int ans = 0;

		if(sz%2!=0) printf("-1\n");
		else{
			s1 = s.substr(0, sz/2);
			s2 = s.substr(sz/2);
//			cout<<s1<<" "<<s2<<endl;
			map<char, int> ms2, ms1;
			int i,j;
			for(i=0; s2[i]; i++){
				//cout<<s1[i]<<" "<<s2[i]<<endl;
				++ms2[s2[i]];
				++ms1[s1[i]];
			}

			for(i=0; s2[i]; i++){
				if(!ms1[s2[i]]){
					ans += ms2[s2[i]];
					ms1[s2[i]] = ms2[s2[i]];
				}
				else{
					ans += max(0, ms2[s2[i]]-ms1[s2[i]]);
					ms1[s2[i]] = ms2[s2[i]]; 
					//ms1[s2[i]] = max(ms1[s2[i]], ms2[s2[i]]-ms1[s2][i]);
				}
			}
		printf("%d\n", ans);
		}
		
	}	
	return 0;
}