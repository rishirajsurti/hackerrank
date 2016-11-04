/*
 * Complete the function below.
 */
#include <bits/stdc++.h>
typedef vector<int> vi;
int n, m;
vector<string> a;
vector<vi> visRed, visBlue;

void floodFill(int x, int y, char c){
    if( x < 0 || y < 0 || x >=n || y >= m || a[x][y] == '.') return;
    
    if(c == 'R'){
        //horizontal only
        if(a[x][y] != 'R' && a[x][y] != 'G') return;    
        if(visRed[x][y] == 1) return;
        visRed[x][y] = 1;
        floodFill(x, y+1, c);
        floodFill(x, y-1, c);
    }
    else if(c == 'B'){
        //vertical only
        if(a[x][y] != 'B' && a[x][y] != 'G') return;    
        if(visBlue[x][y] == 1) return;
        visBlue[x][y] = 1;
        floodFill(x+1, y, c);
        floodFill(x-1, y, c);        
    }
}

int gridColouring(vector < string > g) {

    n = g.size();
    m = g[0].length();
    a = g;
    visRed.assign(n, vi());
    visBlue.assign(n, vi());
    for(int i = 0; i < n; i++){
        visRed[i].assign(m, 0);
        visBlue[i].assign(m, 0);
    }
    int ans = 0;
    for(int i =0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 'R' && !visRed[i][j]){
                ans++; floodFill(i, j, 'R');
            }
            else if(g[i][j] == 'B' && !visBlue[i][j]){
                ans++; floodFill(i, j, 'B');
            }
            else if(g[i][j] == 'G'){
                if(!visRed[i][j]){
                    ans++; floodFill(i, j, 'R');
                }
                if(!visBlue[i][j]){
                    ans++; floodFill(i, j, 'B');
                }
            }
        }
    }
    return ans;
}

