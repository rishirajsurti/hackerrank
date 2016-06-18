#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int t;
	string s,r;
	cin>>t;
	while(t--){
		cin>>s;
		
		for( it = s.rbegin(); it != s.rend(); it++)
			r.push_back(*it);
//		cout<<*s.rbegin()<<endl;
//		s.push_back('x');
		cout<<s<<" "<<r<<endl;;
	}
	return 0;
}