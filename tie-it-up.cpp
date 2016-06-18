#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	int i,j;
	int blue, red;
	vector<int> b, r;
	int x,y;
	char c;
	for(i=0; i<t; i++){
		scanf("%d%c ",&x, &c);
		if(c == 'r')
			r.push_back(x);
		else if(c=='b')
			b.push_back(x);
	}
	sort(r.begin(), r.end());
	reverse(r.begin(), r.end());

	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
	
	i=0,j=0;
	int even = 1;
	int ans = 0, count = 0;
	if(r[0] > b[0]) even =1;
	else even = 0;

	while(i < r.size() && j < b.size()){

		if(even){
			ans += r[i]; i++;
			count++; 
			even = 1 - even;
		} else{
			ans += b[j]; j++;
			count++;
			even = 1 - even;
		}
	}
	printf("%d\n", ans - count);

}