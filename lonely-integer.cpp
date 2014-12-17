#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,c,o;
	int a[101]={0};
	for(i=0;i<n;i++){
		cin>>c;
		a[c]++;
	}
	for(i=0;i<101;i++){
		if(a[i]==1){
			
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}