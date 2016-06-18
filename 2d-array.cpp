#include <bits/stdc++.h>
using namespace std;

int hg[3][3]={
	{1,1,1},
	{0,1,0},
	{1,1,1}
};

int ip[10][10];

int main(){
	int i,j;
	memset(ip, 0, sizeof ip);
	for(i=0; i<6; i++)
		for(j=0; j<6; j++)
			scanf("%d", &ip[i][j]);

	int runningsum=0;
	int ans =-1e5 ;
	int k,l;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			runningsum = 0;
			for(k=0; k<3; k++){
				for(l=0; l<3; l++){
					runningsum += hg[k][l]*ip[i+k][j+l];
				}
			}
			ans = max(ans, runningsum);
		}
	}
	printf("%d\n", ans);
	return 0;
}