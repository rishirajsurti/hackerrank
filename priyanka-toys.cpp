#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	vector<int> a(n,0);
	int w,i,j;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a.begin(), a.end());
	int ans=0; 
	for(i=0; i<n; ){
		ans++; //bought a[i];
		w = a[i];
		while(i<n && a[i]-w <=4) i++;
	}
	printf("%d\n", ans);
	return 0;
}