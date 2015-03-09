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
bool compare(int a, int b);

bool compare(int a, int b){
	if((a-b) <= 4)
		return true;
	else
		return false;
}
int main(){
	int n,i,j;
	vector<int> w;
	scanint(n);
	i=n;
	while(i--){
		scanint(j);
		w.push_back(j);
	}
	sort(w.begin(), w.end(),compare);
	for(i=0; i<w.size(); i++)
		cout<<w[i]<<" ";
	cout<<endl;
	return 0;
}
