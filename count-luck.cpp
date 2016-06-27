#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <map>
using namespace std;

char a[101][101];
int n,m,k;
int d[4][2] = {
	{1, 0}, {-1, 0},
	{0, 1}, {0, -1}
};

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; i++)
			scanf("%s", a[i]);

		scanf("%d", &k);
	}
}