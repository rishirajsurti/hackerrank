#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
	
		vector<int> a(n);
	
		for(int i = 0; i <n; i++){
			scanf("%d", &a[i]);
		}
		int ans = 0;
		if(n % 2 != 0){
			//printf("n is %d\n", n);

			ans = a[0];
			for(int i = 2; i < n; i+= 2){
				ans = (ans ^ a[i]);
			//	printf("print %d\n", 3^1);
			}
		}

		printf("%d\n", ans);
	}
	return 0;
}