#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>
#include <cstring>
using namespace std;
#define getchar_unlocked gc

char G[100][100], Gt[100][100]; //Gtranspose
bool compare(int a[], int b[]){
	if(a[0]<b[0])
		return true;
	else return false;
}
int main(){
	int t,n,i,j;
	char c;
	bool result = true;
	cin>>t;
	while(t--){
		result = true;
		cin>>n;
		memset(G,-1, sizeof(G));
		memset(Gt,-1, sizeof(Gt));
		i=0;
		while(i<n){
			cin>>G[i];
			i++;
		}
		
		
		for(i=0; i<n; i++)
			sort(G[i],G[i]+n);

		/*for(i=0; i<n; i++){
			for(j=0; j<n; j++)
				cout<<G[i][j]<<" ";
			cout<<endl;
		}
		*/
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				Gt[j][i] = G[i][j];
		
		for(i=0; i<n; i++){
			c = Gt[i][0];
			sort(Gt[i],Gt[i]+n);					
			//cout<<Gt[i][0]<<" "<<c<<endl;
			if(Gt[i][0]!=c){
				result = false;
				break;
			}
		}
		if(result)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
