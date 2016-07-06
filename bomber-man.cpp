#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char g[210][210];
int a[210][210];
int r, c;
ll n;


void inc(){
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++){
			if(a[i][j] != -1)
				++a[i][j]; //increment time of bomb only;
		}
}

void blast(){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < r; j++){
			if(a[i][j] == 3){
				a[i][j] = -1;
				if(i-1 >= 0 && a[i-1][j] != 3) a[i-1][j] = -1;
				if(i+1 < r && a[i+1][j] != 3) a[i+1][j] = -1;
				if(j-1 >= 0 && a[i][j-1] != 3) a[i][j-1] = -1;
				if(j+1 < c && a[i][j+1] != 3) a[i][j+1] = -1;
			}
		}
	}
}

void plant(){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(a[i][j] == -1)
				a[i][j] = 0;
		}
	}
}

void print(){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	scanf("%d %d %lld", &r, &c, &n);
	for(int i = 0; i < r; i++){
		scanf("%s", g[i]);
		for(int j=0; j<c; j++){

			a[i][j] = -1;
			if(g[i][j] == 'O')
				a[i][j] = 0;
		}
	}

	ll t = 1; // 1st second do nothing
	inc();
	while(t < n){
		
		t++; 
	//	printf("t = %lld ", t);
		inc();
	//	printf("After inc:\n");
	//	print();
		if(t%2 == 0){
	//		printf("planting\n" );
			plant();
	//		print();
		}
		else{
	//		printf("Blasting\n" );
			blast();
	//		print();
		}

	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(a[i][j] == -1)
				printf(".");
			else
				printf("O");
		}
		printf("\n");
	}
	return 0;
}