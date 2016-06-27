#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, ans, leftt, rightt, i;
int a[1007];
char s[1000007];

bool valid(){
	int A, G, T, C;
	A = a['A'];
	G = a['G'];
	T = a['T'];
	C = a['C'];
	if(A<= n/4 && G <= n/4 && T <= n/4 && C <=n/4) 
		return true;
	return false;
}

int main(){
	scanf("%d", &n);
	scanf("%s", &s);

	for(i = 0; i < n; i++){
		a[s[i]]++;
	}

	if(valid()){
		printf("0\n");
		return 0;
	}

	ans = 9999999;
	leftt = 0;
	for(rightt = 0; rightt<n; rightt++){
		a[s[rightt]]--; //delete the rightt char;
		while(valid() && leftt <= rightt){
			ans = min(ans, rightt - leftt +1);
			a[s[leftt]]++;
			leftt++;
		}
	}
	printf("%d\n", ans);
	return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	scanf("%d", &n);
	string s; 
	cin>>s;
	map<char, int> m;
	int i;
	for(i=0; s[i]; i++) m[s[i]]++;
		
}*/