#include <bits/stdc++.h>
using namespace std;

#define INF 1e6

int main(){
	double n; 
	scanf("%lf", &n);
	double p = 1.0000000 / (double)n;
	
	for(int u, i =0; i < n; scanf("%d", &u), i++);
	double ans = 0;
	for(double i = 1; i < INF; i++){
		ans += i*(double)pow((double)p, (double)i);
	}
	printf("%.6lf\n", ans);
	return 0;
}