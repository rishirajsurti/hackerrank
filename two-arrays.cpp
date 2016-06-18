#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,k; scanf("%d %d",&n, &k);
		vector<int> a(n,0), b(n,0);

		int i,j;
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(i=0; i<n; i++)
			scanf("%d", &b[i]);
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		reverse(b.begin(), b.end());
		bool ok = true;
		for(i=0; i<n; i++)
			if(a[i]+b[i] < k) ok = false;
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}