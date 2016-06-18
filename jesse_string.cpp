#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

/*int lps(string a, int i, int j){
	if(i==j)
		return 1;
	if(a[i] == a[j] && i+1==j)
		return 2;

	if(a[i] == a[j])
		return lps(a, i+1, j-1)+2;

	return max(lps(a, i, j-1), lps(a, i+1,j));
}
*/

int lps( string s){

	int n = s.size();
	int i, j, cl;
	int L[n][n];
	for(i=0; i<n; i++)
		L[i][i] = 1;

	for(cl = 2; cl <= n; cl++){
		for(i = 0; i < n-cl+1; i++){
			j = i+cl-1;
			if(s[i] == s[j] && cl==2)
				L[i][j] = 2;
			else if(s[i] == s[j])
				L[i][j] = L[i+1][j-1] +2;
			else
				L[i][j] = max(L[i][j-1], L[i+1][j]);
		}
	}
	return L[0][n-1];
}
int main(){
	string a, b;
	int t; 
	scanf("%d", &t);
	while(t--){
		cin>>a;
		cin>>b;
		string c;

		/*int i=0,j=0;
		while(i!=a.size() && j!=b.size()){
			c += (a[i]+b[j]);
			i++; j++;
		}
		if(i==a.size() && j!=b.size()){
			while(j!=b.size()){
				c += b[j];
				j++;
			}
		}
		else if(i!=a.size() && j==b.size()){
			while(i!=a.size()){
				c += a[i];
				i++;
			}
		}*/
		int lpsa = lps(a);
		int lpsb = lps(b);
		printf("%d\n", lpsa+lpsb);
	}
}