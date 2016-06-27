#include <algorithm>
#include <vector>
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <map>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull t;
	scanf("%llu", &t);
	while(t--){
		ull n; 
		scanf("%llu", &n);
		vector<ull> a(n);
		map<ull, ull> m;
		
		for(ull i = 0; i < n; i++){
			scanf("%llu", &a[i]);
			m[a[i]]++;
		}
		ull ans=0;
		for(map<ull,ull>::iterator it = m.begin(); it != m.end(); it++){
			ull u = it->second;
			ans += u*(u-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}