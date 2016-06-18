#include <bits/stdc++.h>
using namespace std;

char b[26][26];

int dr[4][2] = {
	{-1, 0}, {0, -1}, {0, +1}, {+1, 0};
}

void graphColor(int i, int j, char c){
	if(i < 0 || i >= h || j < 0 || j>= w) return;
	if(b[i][j] == c) return;
	b[i][j] = c;
	int x,y, ni, nj;
	for(x = 0; x < 4; x++){
		
	}
}

int main(){
	int h,w; scanf("%d %d", &h, &w);
	vector< vector<int> > a(h, vector<int>());
	int i,j,x;
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			scanf("%d", &x);
			a[i].push_back(x);
		}
	}
	memset(b, 0, sizeof b);

	char c = 'a';
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			if(b[i][j] - 'a' < 0)
				graphColor(i,j, c);
			c++;
		}
	}
}