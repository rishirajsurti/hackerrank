#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-3
int n;
vector<int> h;

bool ok(int e){
	int i;
	for(i=0; i<n && e >= 0; i++){
		if(h[i] > e)
			e = e - (h[i] - e);
		else
			e = e + (e - h[i]);
	}
	return (e >= 0);
}

int main(){
	scanf("%d", &n);
	int i,j;
	h.assign(n, 0);
	for(i=0; i<n; i++) scanf("%d", &h[i]);
	int low, mid, high;
	low = 0; high = 100000;
	
	while(ok(high)){ high = 2*high; } // while upper limit is satisfied

	while(high - low <EPS){
		mid = (high+low) / 2;
		printf("%d %d %d\n", low, high, mid);
		if(ok(mid)){
			low = mid;
			high = high;
		}
		else{
			low = low;
			high = mid;
		}
	}
	printf("%d\n", mid);
	return 0;	
}