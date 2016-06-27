#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector<int> &a){
    for(int i = 0; i < a.size(); i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; scanf("%d", &n);
    vector<int> a(n);
    for(int i = 0; i < n; scanf("%d", &a[i++]));
//    reverse(a.begin()+1, a.begin()+4);
   	bool found = true;
   	int count = 0;
   	int discontinuities = 0;
   	vector<int> as(a.begin(), a.end()); // a sorted
   	sort(as.begin(), as.end());
   	int l=-1, r=-1;

   	for(int i = 0; i < n; i++){
   		if(a[i] != as[i]){
   			if(l==-1)
	   			l = i; // dont change later
	   		r = i;
   			if(discontinuities == 0)
   				discontinuities++; //discont = 1
   			count++; // mismatches.
   		}
   		else{
   			//if(l!=-1) r=i-1; // encountered discont;
   			discontinuities++; // discon = 2;
   			//max 2 diconts if count != 2
   		}
   	}
   	l++; r++;
   	if(count == 0)
   		cout<<"yes"<<endl;
   	else if(count == 2 ){
   		cout<<"yes"<<endl;
   		cout<<"swap "<<l<<" "<<r<<endl;
   	}
   	else if( discontinuities == 2){
   		cout<<"yes"<<endl;
   		cout<<"reverse "<<l<<" "<<r<<endl;
   	} else if(discontinuities != 2)
   		cout<<"no"<<endl;

    return 0;
}
