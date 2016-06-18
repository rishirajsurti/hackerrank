#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		int i,j,k;
		for(i=0; i<n; i++){ 
			scanf("%d", &a[i]);
		}
		bool ok = false;

		for(i=0; i<n && !ok; i++){
			int left_sum=0, right_sum =0;
			for(j=i-1; j>=0; j--) left_sum+=a[j];
			for(k=i+1; k<n; k++) right_sum+=a[k];
			if(left_sum==right_sum) ok = true;
		}

		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}