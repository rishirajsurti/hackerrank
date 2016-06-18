#include <queue>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
	int n,u; 
	scanf("%d", &n);
	
	vector<int> a;
	scanf("%d", &u);
	a.push_back(u);
	vector<int>::iterator it;
	printf("%.1f\n", (float)a[0]);
	for(int i = 1; i < n ; i++){
		scanf("%d", &u);
		it = lower_bound(a.begin(), a.end(), u);
		a.insert(it, u);
		if(a.size() % 2 == 0){
			int l = a.size()/2;
			printf("%.1f\n", (float)(a[l-1]+a[l])/2);
		} else {
			int l = a.size() / 2;
			printf("%.1f\n", (float)a[l]);
		}
	}
	return 0;
}