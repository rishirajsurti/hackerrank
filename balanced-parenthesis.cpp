#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string str;
		stack<char> s;
		cin>>str;
		int i;
		bool matched = true;
		for(i=0; str[i] && matched; i++){
			if(str[i] == '(' || str[i] == '[' || 
				str[i] == '{')
				s.push(str[i]);
			else{
				if(str[i] == ')'){
					if(!s.empty() && s.top()!='(')
						matched = false;
					else if(!s.empty())
						s.pop();

				}
				else if(str[i] == '}'){
					if(!s.empty() && s.top() != '{')
						matched = false;
					else if(!s.empty())
						s.pop();
				}
				else if(str[i] == ']'){
					if(!s.empty() && s.top() != '[')
						matched = false;
					else if(!s.empty())
						s.pop();
				}
			}
		}
		if(!s.empty())
			matched = false;
		
		if(matched)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}