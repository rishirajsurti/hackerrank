#include <cstdio>
#include <algorithm>
using namespace std;

int rating[100001];
int left[100001];
int right[100001];

int main(){
	int n; scanf("%d", &n);
	int i;
	int candies = 0;
	for(i=0; i<n; i++){
		scanf("%d", &rating[i]);
		left[i] = 1;
		right[i] = 1;
	}
	
	for(i=1; i<n; i++){
		if(rating[i] > rating[i-1])
			left[i] = left[i-1] + 1;
	}

	for(i=n-2; i>=0; i--){
		if(rating[i] > rating[i+1])
			right[i] = right[i+1] +1;
	}

	int ans =0 ;
	for(i=0; i<n; i++){
		ans += max(left[i], right[i]);
	}
	printf("%d\n", ans);
	return 0;
}