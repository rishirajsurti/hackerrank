#include <bit/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	string line;
	vector<int> a,b;
	getline(cin, line);
	istringstream is(line);
	a.assign(istream_iterator<int>(is), istream_iterator<int>());

	getline(cin, line);
	istringstream isb(line);
	b.assign(istream_iterator<int>(isb), istream_iterator<int>());

	
}