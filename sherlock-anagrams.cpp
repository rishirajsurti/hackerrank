#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	map<string, int> m;

	while(t--){
		m.clear();
		string s;
		cin>>s;
		int len = (int)s.size();
		for(int i = 0; i < len; i++){
			for(int l = 1; i+l-1 < len; l++){
				string t = s.substr(i, l);
//				cout<<t<<endl;
				sort(t.begin(), t.end());
				m[t]++;
//				cout<<t<<endl<<endl;
			}
		}

		long long ans = 0;
		for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
			ans += (long long) (it->second) * (it->second - 1)/2;
		}
		cout<<ans<<endl;
	}
	return 0;					

}