#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int SumContig(vector<int>);
int SumNonContig(vector<int>);
int max(int,int);

int s_contig=0;
int s_non_contig=0;

int main(){
	int t;
	cin>>t;
	int i,n,j,k;
	vector<int> a;
	for(i=0; i<t; i++){
		cin>>n;
		for(j=0; j<n; j++){
			cin>>k;
			a.push_back(k);
		}
		//cout<<SumContig(a)<<" "<<SumNonContig(a)<<endl;
		s_contig=SumContig(a);
		cout<<s_contig<<endl;
		a.clear();

	}
	return 0;
}

int SumContig(vector<int> a){
	
	if(a.size()==1)
		return a[0];
	else{
	vector<int>::const_iterator p1,p2,p3,p4;
	p1 = a.begin();
	p2 = a.end()-1;
	p3 = a.begin()+1;
	p4 = a.end();
	vector<int> a1(p1,p2);
	vector<int> a2(p3,p4);
	vector<int> a3(p3,p2);
	return max(*(a.begin())+SumContig(a1), *(a.end()-1) + SumContig(a2));

	}
		
}
int max(int a, int b){
	return (a>b ? a:b);
}