#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1, x2, v1, v2;
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
	int d ;

	d = (x1-x2) / (v2-v1);
	if(v2 == v1 && x1!=x2)
		printf("NO\n");
	else if(v2==v1 && x1==x2)
		printf("YES\n");
	else if(d < 0)
		printf("NO\n");
	else if((x1-x2) == ((v2-v1)*d))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;	
}