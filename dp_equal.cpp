#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int N;
vi a;

ll solve(ll tmp){
	ll x = 0;
	if(tmp >= 5){
		x += tmp/5;
		tmp %= 5;
	}
	if(tmp >= 2){
		x += tmp/2;
		tmp %= 2;
	}
	x += tmp;
	return x;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &N);
		a.clear(); a.assign(N, 0);
		for(int i = 0 ; i < N; scanf("%d", &a[i++]));
		ll sum[6] = {0};
		int minele = *min_element(a.begin(), a.end());

		for(int j = 0; j < 6; j++){
			for(int i = 0; i < N; i++){
				int temp = abs(a[i] - (minele-j));
				sum[j] += solve(temp);
			}
		}
		printf("%llu\n", *min_element(sum, sum+5));
	}
}