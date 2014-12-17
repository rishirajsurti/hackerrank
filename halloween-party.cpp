#include <iostream>
using namespace std;
int maxpieces(int k);
int maxpieces(int k){
	int max;
	if(k%2 != 0){
		int a,b;
		a=k/2;
		b=a+1;
		
		return (a*b);
	}
	else if(k%2 == 0){
		int a=k/2;
		return a*a;
	}
	return;
}
int main(){
	int t,i,k;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>k;
		cout<<maxpieces(k)<<endl;
	}
	return 0;
}
