#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//#define MAX 1000000005


int main(){
	long long unsigned int n, s, a;
	scanf("%llu %llu", &n, &s);
	int i, count=0;
	bool skipped = false;

	for(i=0; i < n; i++){
		scanf("%llu",&a);

		if(s >= a)
			count++;
		else if(!skipped)
			skipped = true;
		else if(skipped)
			break;
	}
	printf("%d\n", count);
	return 0;
}