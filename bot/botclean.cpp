#include <iostream>
#include <vector>
#include <cassert>
#include <climits>
using namespace std;

int visited[5][5];

int dist()

void next_move(int posr, int posc, vector <string> board) {
    //add logic here
    int sr, sc;
    sr = posr;  sc = posc;


}


int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    memset(visited, 0 , sizeof(visited));

    next_move(pos[0], pos[1], board);
    return 0;
}
