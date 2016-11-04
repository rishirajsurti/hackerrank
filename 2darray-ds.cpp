#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > arr;

int hg[3][3] = {
	{1,1,1},
	{0,1,0},
	{1,1,1}
};

int solve(int x, int y){
	if(x < 0 || y < 0 || x + 2 >= 6 || y+2 >= 6) return INT_MIN;
	int sum = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			sum += arr[x+i][y+j]*hg[i][j];
		}
	}
	return sum;
}


int main(){
	arr.assign(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int ans = INT_MIN;
    for(int i = 0; i < 6; i++){
    	for(int j = 0; j < 6; j++){
    		ans = max(ans, solve(i, j));
    	}
    }
    printf("%d\n", ans);
    return 0;
}
