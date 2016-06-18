#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){

		int n; scanf("%d", &n);
		if(n==1 || n==2){ 
			printf("-1\n");
			continue;
		}
		else if(n==3)
			printf("555\n");
		else if(n==4)
			printf("-1\n");
		else if(n==5)
			printf("33333\n");
		else if(n%3==0){
			for(int i =0; i<n; i++)
				printf("5");
			printf("\n");
		}

		else if(n%5!=0){
			int endn = n-1;
			while(endn%3!=0 && (n-endn)%5!=0 && n-endn<5)
				endn--;
			int i;
			for(i = 0; i<endn; i++)
				printf("5");
			for(; i<n; i++)
				printf("3");
			printf("\n");
		}

		else if(n%5==0){
			for(int i =0; i<n; i++)
				printf("3");
			printf("\n");
		}

	}
	return 0;
}