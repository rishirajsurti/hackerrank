#include <bits/stdc++.h>
using namespace std; 

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n; scanf("%d %d", &m, &n);
		int i;
		vector<int> a(n), sa(n);
		for(i=0 ;i<n; i++) scanf("%d", &a[i]);
		sa = a;
		sort(a.begin(), a.end());
		int j;
		i=0; j=n-1;
		while(i<j){
			if(a[i]+a[j] == m) break;
			else if(a[i]+a[j] > m) j--;
			else if(a[i]+a[j] < m) i++;
		}
		i = find(sa.begin(), sa.end(), a[i])-sa.begin()+1;
		j = find(sa.begin(), sa.end(), a[j]) - sa.begin()+1;
		if(i==j) j++;
		printf("%d %d\n",i,j);
	}
	return 0;
}

/*2 2 3 4

*/