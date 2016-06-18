#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
     //your logic here

    int mx, my;
    int px, py;

    mx = c;   my = r;

    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            if(grid[i][j] == 'p'){
                px = j; py = i;
            }
    }

    if(px > mx)
        cout<<"RIGHT"<<endl;
    else if(px < mx)
        cout<<"LEFT"<<endl;
    else if(px == mx){
        if(py > my)
            cout<<"DOWN"<<endl;
        else
            cout<<"UP"<<endl;
    }

}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
