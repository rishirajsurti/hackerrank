#include <cstdio>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		unsigned int n;
		scanf("%u", &n);
		printf("%u\n", ~n);
	}
	return 0;
}