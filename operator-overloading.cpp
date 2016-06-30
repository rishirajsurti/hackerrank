#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

class Matrix{
public:
	vector<vi> a;

	Matrix operator +( Matrix other) const{
		Matrix result;
		result.a.assign(this->a.size(), vi());

		for(int i = 0; i < this->a.size(); i++){
			result.a[i].assign(this->a[i].size(), 0);
			for(int j = 0; j < this->a[i].size(); j++){
				result.a[i][j] = this->a[i][j] + other.a[i][j]; 
			}
		}
		return result;
	}

};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}