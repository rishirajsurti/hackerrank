#include <iostream>
#include <list>
#include <algorithm>
#include <stdio.h>
using namespace std;

#define gc getchar_unlocked
void scanint(int &x);

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}

class Graph{
private:
	int V;
	list<int> *adj;
	list<int> *dist;
public:
	Graph(int V);
	void addEdge(int u, int v);
	void BFS(int u);
};

Graph::Graph(int V){
	this->V  = V;
	adj = new list<int>[V];
	dist = new list<int>[V];
	int i;
	for(i=0; i<V; i++)
		dist[i] = -1;
}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
}

void Graph::BFS(int s){

	bool *visited = new bool[V];
	int i;
	for(i=0; i<V; i++)
		visited[i] = false;

	list<int> queue;
	queue.push_back(s);

	list<int>::iterator it;
	int cost = 6;
	
	while(!queue.empty()){

	s = queue.front();
	visited[s] = true;
	queue.pop_front();

	for(it = adj[s].begin(); it!=adj[s].end(); it++){

		if(!visited[*it]){
			visited[*it] = true;
			dist[*it] = cost;
			queue.push_back(*it);
			}
		}
	cost += 6;	
	}
}
int main()
{
	int t;
	scanint(t);

	int n,m,x,y,s;
	while(t--){
		scanint(n);
		scanint(m);

		Graph g(n);
		while(m--){
			scanint(x);	scanint(y);
			d
		}
		scanint(s);


	}
}