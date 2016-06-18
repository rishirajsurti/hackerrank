#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int mx, my;
    int px, py;

    mx = n/2;   my = n/2;

    if( grid[0][0] == 'p'){
        px = 0; py = 0;
    }
    else if(grid[0][n-1] == 'p'){
        py = 0; px = n-1;
    }
    else if(grid[n-1][0] == 'p'){
        py = n-1;   px = 0;
    }
    else{
        py = n-1;   px = n-1;
    }
  //  cout<<mx<<" "<<my<<endl;
    //cout<<px<<" "<<py<<endl;

    if(mx < px){
        while(mx != px){
            mx++;
            cout<<"RIGHT"<<endl;
        }
    }
    else if(mx > px){
        while(mx != px){
            mx--;
            cout<<"LEFT"<<endl;
        }
    }

    if(my < py){
        while(my != py){
            my++;
            cout<<"DOWN"<<endl;
        }
    }

    else if(my > py){
        while(my != py){
            my--;
            cout<<"UP"<<endl;
        }
    }

}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
