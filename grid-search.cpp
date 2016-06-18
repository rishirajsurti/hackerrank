#include <bits/stdc++.h>
using namespace std;
#define N 1005

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int R, C, r, c;
		char g[N][N], p[N][N];
		int i,j, k,l;
		scanf("%d %d", &R, &C);
		for(i=0; i<R; i++)
			scanf("%s", g[i]);
		
		scanf("%d %d", &r, &c);
		for(i=0; i<r; i++)
			scanf("%s", p[i]);

		bool ok = false;

		for(i=0; i<R; i++){
			for(j=0; j<C; j++){

				bool m = true;
				
				for(k=0; k<r && m; k++){
					for(l=0; l<c && m; l++){
				
						if(i+k<R && j+l<C &&
							g[i+k][j+l] == p[k][l])
						{ }
						else{
							m = false;
						}
					}
				}
				ok = ok | m;
			}
		}
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}