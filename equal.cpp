#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
vi a;
int n;

/*suppose last operation of answer is given.
now you can go to next iteration from beginning
check by increasing 1,3, 5
when would I know that this set of operations is not going to work?
let say I will start with N operations. should be proportional to n.

think of it as logic probs.
state: N, chocos
*/

int main(){

	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.assign(n, 0);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
	}
}