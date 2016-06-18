#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	vector<int> s, smax;
	int current_max = -99999;
	int sz = 0;
	for(int i = 0; i < n; i++){
		int a,x;
		scanf("%d", &a);
		if(a == 1){
			scanf("%d", &x);
			s.push_back(x);
			if(smax.empty())
				smax.push_back(x);
			else
				smax.push_back(max(smax[sz-1], x));
			sz++;
		} else if(a == 2){
			s.pop_back();
			smax.pop_back();
			sz--;
		} else if(a == 3){
			cout<<smax[sz-1]<<endl;
//			cout<<*max_element(s.begin(), s.end())<<endl;
		}
	}
	return 0;
}