#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; scanf("%d", &t);
    while(t--){
    	int n ;scanf("%d", &n);
    	string s;
    	cin>>s;
    	vector<string> a;
    	for(int i = 1; i < (1<<n); i++){
    		string str="";
    		for(int j = 0; j < n; j++){
    			if(i & (1<<j)) str+=s[j];
    		}
    		a.push_back(str);
    	}
/*    	for(int k = 1; k <= n; k++){
    		for(int i = 0; i < n-k+1; i++){
//    			int j = i+k-1;
    			a.push_back(s.substr(i,k));
    		}
    	}*/
    	sort(a.begin(), a.end());
    	for(int i = 0; i< a.size(); i++)
    		cout<<a[i]<<endl;

    }
    return 0;
}
