#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i,j,x,y,x1,y1,x2,y2;
    int dist=999999999;
    cin>>t;
    for(i=0;i<t;i++){
    	
   		cin>>x;
   		cin>>y;
   		cin>>x1;
   		cin>>y1;
   		cin>>x2;
   		cin>>y2;
    	if(abs(x-x1)<dist)
    		dist=abs(x-x1);
    	if(abs(x-x2)<dist)
    		dist=abs(x-x2);
    	if(abs(y-y1)<dist)
    		dist=abs(y-y1);
    	if(abs(y-y2)<dist)
    		dist=abs(y-y2);

    	cout<<dist<<endl;
    	dist=999999999;
    	}
    return 0;
}
