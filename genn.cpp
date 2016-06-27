#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> m;
	m[0] = 1;
	cout<<m[1]<<endl;
	return 0;
}
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> a);

int main(){
	vector<int> a,b;
	int i=0;
	while(i<10)
		a.push_back(i++);
	vector<int>::const_iterator first = a.begin();
	vector<int>::const_iterator last = a.end()-1;
	vector<int> newV(first,last);
	print(newV);
}

void print(vector<int> a){
	int i;
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
}
*/