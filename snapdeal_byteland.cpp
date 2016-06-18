#include <cstdio>
using namespace std;

void CalcWays(int a[2500][2500]){
	printf("done");
}

int main(){
	int n,m,i,j;
	int a[2500][2500];
	int way=0, total=0;
	scanf("%d %d",&n, &m);

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
			
		}
	}

	CalcWays(a);
	return 0;

}