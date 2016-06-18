#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int i,j,k;
	for(i=0; s[i]; i++){
		if(s[i]==' ')
			s.erase(s.begin()+i);
	}	
//	cout<<s<<endl;

	int sz = s.size();
	int r,c;
	r = c = sqrt(sz);
	if(r*c < sz) c++;
	if(r*c < sz) r++;

//	printf("r %d c %d\n", r,c);
	char grid[r][c];

	for(i=0; i<sz; i++){
		for(j=0; j<r; j++){
			for(k=0; k<c; k++){
				grid[j][k] = s[i++];
			}
		}
	}

/*	for(j=0; j<r; j++){
		for(k=0; k<c; k++)
			printf("%c", grid[j][k]);
		printf("\n");
	}
	printf("\n\n");
*/	for(k=0; k<c; k++){
		if(k>0) printf(" ");
		for(j=0; j<r; j++)
			printf("%c", grid[j][k]);
	}

	printf("\n");

	return 0;
}	