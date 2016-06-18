#include <algorithm>
#include <vector>
#include <cstdio>
#include <iostream>

using namespace std;
typedef vector<int> vi;

class UnionFind{
private:
	vi p, rank, setSize;
	int numSets;

public:
	UnionFind(int N){
		p.assign(N, 0);
		for(int i = 0; i < N; i++) p[i] = i;
		rank.assign(N, 1);
		setSize.assign(N, 1);
		numSets = N;
	}

	int findSet(int u){
		return p[u] == u ? u : p[u] = findSet(p[u]);
	}

	bool isSameSet(int u, int v){
		return findSet(u) == findSet(v);
	}

	void unionSet(int u, int v){
		u = findSet(u);
		v = findSet(v);
		if(u!=v){
			numSets--;
			if(rank[u] > rank[v]){
				p[v] = u;
				setSize[u] += setSize[v];
			}
			else{
				p[u] = v;
				setSize[v] += setSize[u];
				if(rank[u] == rank[v])
					rank[v]++;
			}
		}
	}

	int numDisjointSets(){
		return numSets;
	}

	int sizeOfSet(int u){
		return setSize[findSet(u)];
	}
};

int main(){
	int n,q;
	scanf("%d %d", &n, &q);
	char line[1024];
	UnionFind uf(n);
	cin.ignore();
	for(int i = 0; i < q; i++){
		gets(line);

		//fgets(line, 1024, stdin);
		int a,b;
		char c;
//		getline(cin, line);
		if(line[0] == 'M'){
			sscanf(line, "%c %d %d",&c, &a, &b);
			--a; --b;
			//cout<<"Unioning" <<a<<" "<<b<<endl;
			uf.unionSet(a,b);

		}
		else{
			sscanf(line, "%c %d",&c, &a);
			--a;
			//cout<<"size of "<<a<<endl;
			cout<<uf.sizeOfSet(a)<<endl;
		}
	}
	return 0;
}