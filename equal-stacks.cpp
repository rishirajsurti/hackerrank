#include <stack>
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef stack<int> si;
typedef vector<int> vi;
vi a, b, c;

int maxx(int x, int y, int z, int w){
	return max(max(x,y), max(z,w));
}

int solve(int h1, int h2, int h3, int idx1,
	int idx2, int idx3){

	//printf("-----%d %d %d %d %d %d-----", h1, h2, h3, idx1, idx2, idx3);
	if(h1 <0 || h2 <0 || h3 < 0 || idx1 < 0 || idx2 <0 || idx3 < 0)
		return -1;
	if(h1==h2 && h2 == h3){
//		printf("return %d ", h1);
		if(h1==0) return -200;
		else return -1;
	}
	else{
		int ans = -1;
		ans = max(ans, solve(h1-a[idx1], h2, h3, idx1-1, idx2, idx3));
		ans = max(ans, solve(h1, h2-b[idx2], h3, idx1, idx2-1, idx3));
		ans = max(ans, solve(h1, h2, h3-c[idx3], idx1, idx2, idx3-1));
		ans = max(ans, solve(h1-a[idx1], h2-b[idx2], h3-c[idx3], idx1-1, idx2-1, idx3-1));
		return ans;
	}
}

int main(){
	int n1, n2, n3, h1=0, h2=0, h3=0;
	scanf("%d %d %d", &n1, &n2, &n3);
	a.assign(n1, 0); b.assign(n2, 0); c.assign(n3, 0);
	for(int i = 0; i < n1; scanf("%d", &a[i])){
		h1+=a[i]; i++;
	}
	for(int i = 0; i < n2; scanf("%d", &b[i])){
		h2 += b[i]; i++;
	}
	for(int i = 0; i < n3; scanf("%d", &c[i])){
		h3 += c[i]; i++;
	}
	//printf("%d %d %d\n", h1, h2, h3);
	printf("%d\n", solve(h1, h2, h3, n1-1, n2-1, n3-1));
}