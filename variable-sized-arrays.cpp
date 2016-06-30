#include <iostream>
using namespace std;

int main() {

	int n,q; scanf("%d %d", &n, &q);
	int **a;
	a = new int*[n];
	for(int i = 0; i < n; i++){
		int k; scanf("%d", &k);
		a[i] = new int[k];
		for(int j = 0; j < k; j++)
			scanf("%d", &a[i][j]);
	}

	for(int i = 0; i < q; i++){
		int x,y;
		scanf("%d %d", &x, &y);
		printf("%d\n", a[x][y]);
	}

	return 0;
}
