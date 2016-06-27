#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

#define isOn(S, j) (S & (1<<j))
#define setBit(S, j) (S |= (1<<j))
#define clearBit(S, j) (S &= ~(1<<j))


int main(){
	int q; scanf("%d", &q);
	while(q--){
		int k, a, b, c;
		int ans = 0;
		scanf("%d", &k);
		scanf("%x %x %x", &a, &b, &c);
//		printf("%d %d %d\n", a, b, c);
		for(int i = 0; i < 64; i++){
			if(isOn(c, i)){
				if(isOn(a,i) || isOn(b,i)){
					//nothing to be done
				}else{
					setBit(a, i); k--;
				}
			}
			else{
				//not on
				if(isOn(a,i) && isOn(b,i)){
					//both on;
					clearBit(a,i); k--;
					clearBit(b,i); k--;
				}
				else if(isOn(a,i)){
					clearBit(a,i); k--;
				}else if(isOn(b,i)){
					clearBit(b,i); k--;
				}
			}
		}
		if(k>0)
			printf("-1\n");
		else
			printf("%x\n%x\n",a,b );
	}
	return 0;
}