#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k; scanf("%d %d", &n, &k);
	int i,j;
	vector<int> a(n,0), b(n,0);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		b[i-1] = n+1-i;
	}

	i =0, j=0;		
	while(k>0){
		int pos = find(a.begin(), a.end(), b[i]) - a.begin();
		int temp = a[pos];
		a[pos] = a[j];
		a[0] = temp;
		k--; i++;
		j++;
	}
	for(i=0; i<a.size(); i++){
		if(i > 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}