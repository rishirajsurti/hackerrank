#include <bits/stdc++.h>
using namespace std;

/*
1) brute force, do rotation operations for each element of matrix
loop wise
given min(m,n) is even-> number of loops is min(m,n)/2;
e.g. 4 rows.. 2 loops, 5 rows, 2 loops coz 1 centre element won't move

2) store the loops in an array
find the turning points after rotation
m rows, n cols
after every 2(m+n) rotations, the outer loop will be same
after evern 2(m+n)-4 rotations, outer-1 loop will be same...
store loops in an array.
no operations just finding out the positions using R
*/

int main(){
	int m,n,r;
	scanf("%d %d %d", &m, &n, &r);

}