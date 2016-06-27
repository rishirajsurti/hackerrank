#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;


int main(){
	int n; scanf("%d", &n);
	while(n--){
		string s;
		cin>>s;
		int i,j;
		i = 0; j = s.size()-1;
		int ans = 0;
		while(i<=j){
			ans += abs(s[i]-s[j]);
			i++; j--;
		}
		printf("%d\n", ans);
	}
	return 0;
}