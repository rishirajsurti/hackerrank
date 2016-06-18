#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,q,k,type,i,j;
	long long unsigned int x;
	scanf("%d",&n);
	scanf("%d",&q);

//	vector<int> a;
	long long unsigned int *a = new long long unsigned int[n];
	for(i=0; i<n; i++){
		scanf("%llu",&a[j]);
	}

	sort(a,a+n);

	for(i=0; i<q; i++){
		scanf("%llu %d %d",&x, &k, &type);

		if(type==0){
			for(j=0; j<n; j++)
				if(a[j]>x)
					break;
				else{}
			j--;
			//j is index;
			if(j+k<n)
				printf("%llu\n", a[j+k]);
			else
				printf("-1\n");
		}
		else{
			for(j=0; j<n; j++)
				if(a[j]>x)
					break;
			j--;
			//j is index;

			if(j-k>=0)
				printf("%llu\n", a[j-k]);
			else
				printf("-1\n");
		}
	}
	return 0;
}