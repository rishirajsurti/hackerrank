#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int main(){
	string s;
	cin>> s;
	long long int res = 0;
	long long int f = 1;
	for(int i = s.length()-1; i >=0; i--){
		res = (res + (s[i]-'0')*f*(i+1)) % M;
		f = (f*10 + 1) % M;
	}
	cout<<res<<endl;
	return 0;
}