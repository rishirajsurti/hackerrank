#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

//#define numberOfOnBits(S) (__builtin_popcount(S))
int setBits(unsigned long long int n) {
    int count = 0 ;
    while(n) {
        n &= (n-1) ;
        count ++ ;
    }
    return count ;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		unsigned long long n;
		scanf("%llu", &n);
		
		printf("%s\n", (setBits(n-1) & 1) ? "Louise" : "Richard");
	}
	return 0;
}