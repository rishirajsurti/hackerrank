#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull min(ull a, ull b){
	return (a>b) ? b : a;
}

int main(){
	int n; scanf("%d", &n);
	vector<ull> a(n);
	ull p,q;
	int i;
	for(i=0; i<n; i++) scanf("%llu", &a[i]);
	scanf("%llu %llu", &p, &q);
	ull ans=1e6, max_=-1, min_;
	ull m;

	for(m=p; m<=q; m++){
		vector<ull> ma;
		for(i=0; i<n; i++) ma.push_back(abs(a[i]-m));
		min_ = *min_element(ma.begin(), ma.end());

		if(min_ > max_){
			max_ = min_;
			ans = m;
		}
	}
	printf("%llu\n", ans);
	return 0;
}