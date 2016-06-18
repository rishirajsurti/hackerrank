#include <bits/stdc++.h>
using namespace std;

int price(int purchased, int cost){
	return (purchased+1)*cost;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int i,j;
	vector<int> a(n,0);
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	map<int, int> m;
	for(i=0; i<k; i++) m[i] = 0;

	int ans=0;
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for(i=0; i<a.size(); i++){
		j = i%k;
		ans += price(m[j], a[i]);
		++m[j];
	}
	printf("%d\n", ans);
	return 0;
}
