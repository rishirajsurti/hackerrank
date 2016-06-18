#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int n,m; // n dimensions, m points

struct point{
	int *x; // max dimensions
	/*inline bool operator < (point other) const{
		if(x[0] < other.x[0]);
	}
	inline bool operator = (point other) const{
		other.x = this->x;
	}*/
};

map<point, int> visited;

int count(point current, int dist){

	if(dist == m) return 1;
	int i,j, ans = 0;
	for(i=0; i<n; i++){
		point next;
		next = current.x[i]+1;
		if(!visited[next]){
			visited[next] = 1;
			ans+=count(next, dist+1);
		}
		visited[next] = 0;

		next = current.x[i]-1;
		if(!visited[next]){
			visited[next] = 1;
			ans+=count(next, dist+1);
		}	
	}
	return ans;
}

point start;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		int i;
		start.x = new int[n];
		for(i=0; i<n; i++) scanf("%d", &(start.x[i]));		
		visited[start] = 1;
		printf("%d\n", count(start, 0));
	}
}