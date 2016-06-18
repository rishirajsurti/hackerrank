#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n){
	if(n == 0) 
		return 0; //no moves;

	priority_queue<int, vector<int>, greater<int> > pq; 
	//sort incr
	unordered_map<int, int> moves; 
	//num of moves for a parti n;

	int minMoves = 1e9;
	pq.push(n);
	moves.insert(make_pair(n, 0)); // min n moves

	while(!pq.empty()){
		int x = pq.top(); //n;
		int m = moves.find(x)->second; //(n,0);
		pq.pop(); //n

		if(x > 0 && m+1 < minMoves){
			//n > 0 , 0+1 < 1e9
			auto it = moves.insert(make_pair(x-1, 1e9)).first;
			if(it->second > m+1){
				it->second = m+1;
				pq.push(x-1);
				if(x-1 == 0){
					minMoves = it->second;
				}
			}
		

		for(int k = (int)floor(sqrt(x)); k > 1; k--){
			if(x % k == 0){
				int factor = x / k;
				auto it2 = moves.insert(make_pair(factor, 1e9)).first;
				if(it2->second > m+1){
					it2->second = m+1;
					pq.push(factor);
					}
				}
			}
		}
	}
	return minMoves;
}


int main(){
	int q; 
	scanf("%d", &q);
	for(int i = 0; i < q; i++){
		int n; scanf("%d", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}
/*#include <bitset>
#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

int main(){
	int q,n;
	scanf("%d", &q);
	while(q--){
		scanf("%d", &n);
		int ans = 0;
		
		while(n>=1){
			//printf("%d %d\n", n, ans);
			if(n==1){
				n--;
				ans++; break;
			}
			if(n==2){
				n--;
				ans+=2; break;
			}
			int sn = sqrt(n);
			sn++;
			bool found = false;
			for(int i = sn; i>=2 && !found; i--){
				if(n%i == 0){
					found = true;
					int cut = max(i, n/i);
					n = n - cut;
					ans++;
				}
			}
			if(!found){
				n--;
				ans++;
			}	
		}

		printf("%d\n",ans);
	}
	return 0;
}
*/