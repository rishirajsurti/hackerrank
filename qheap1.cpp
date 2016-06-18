#include <queue>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main(){
	int q;
	scanf("%d", &q);
	priority_queue<int, vector<int>, greater<int> > pq;
	map<int, int> there;
	while(q--){
		int a,b;
		scanf("%d", &a);
		if(a==1){
			scanf("%d", &b);
			pq.push(b);
			there[b] = 1;

		} else if(a==2){
			scanf("%d", &b);
			there[b] = 0;
		} else if(a==3){
			while(!there[pq.top()]){
				pq.pop();
			}
			cout<<pq.top()<<endl;
		}
	}
	return 0;
}

/*
#include <queue>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int q;
	scanf("%d", &q);
	priority_queue<int, vector<int>, greater<int> > pq;
	map<int, int> there;
	while(q--){
		int a,b;
		scanf("%d", &a);
		if(a==1){
			scanf("%d", &b);
			pq.push(b);

		} else if(a==2){
			scanf("%d", &b);
			priority_queue<int> temp;
			int u;
			while(pq.top() != b){
				u = pq.top(); pq.pop();
				temp.push(u);
			}
			//pq.top() == b;
			pq.pop();
			while(!temp.empty()){
				pq.push(temp.top());
				temp.pop();
			}

		} else if(a==3){
			cout<<pq.top()<<endl;
		}
	}
	return 0;
}
*/