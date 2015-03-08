#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x);

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;
}

int main(){
	int n,k,i,j,t=0;
	scanint(n);
	scanint(k);
	i=n;
	vector<int> a;
	while(i--){
		scanint(j);
		a.push_back(j);
	}
	sort(a.begin(),a.end());
	j=0;
	for(i=0; i<a.size(); i++){
		if(j+a[i] < k){
			j = j+a[i];
			t++;
		}
	}
	cout<<t<<endl;
}