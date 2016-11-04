#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x, y;
	bool operator < (Point other) const{
		if(x == other.x && y == other.y) return false;

		if(x != other.x){
			return x < other.x;
		}
		return y < other.y;
	}
};
int main() {

	int n; scanf("%d", &n);
	vector<Point> a;
	for(int i = 0; i < n; i++){
		Point u;
		scanf("%d %d", &u.x, &u.y);
		a.push_back(u);
	}

	sort(a.begin(), a.end());
	vector<int> dp(n, 0);
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[j] < a[i]){
				//printf("Bridge %d %d %d %d\n", a[j].x, a[j].y, a[i].x, a[i].y);
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	printf("%d\n", (*max_element(dp.begin(), dp.end()))-1);
    return 0;
}