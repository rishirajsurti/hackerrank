#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cassert>
#include <climits>
using namespace std;


int a[6][6];
int getDNAAlignment2(string dna1, string dna2) {

	string s;
	if(dna1.length() < dna2.length()){
		s = dna1;
		dna1 = dna2;
		dna2 = s;
	}
	int l1 = dna1.length();
	int l2 = dna2.length();
	//l2 min;
	
	int i,j,k,ans=0;
	char c;
	k=0;
	for(i=0; i<l2; i++){
		c = dna2[i];
		
		
		j=k;
		while(j<l1){
			if(dna1[j]==c){
				if(c=='A'){
					ans+=a[1][1];
			//		k=j;
			//		break;
				}
				else if(c=='C'){
					ans+=a[2][2];
		//			k=j;
			//		break;
				}
				else if(c=='G'){
					ans+=a[3][3];
			//		k=j;
			//		break;
				}
				else if(c=='T'){
					ans+=a[4][4];
				//	k=j;
				//	break;
				}
				break;
			}
			j++;
		}

		if(j>=l1 & dna1[l1-1]!=c){

			if(c=='A'){
				if(dna1[k]=='C')
					ans+=a[1][2];
				else if(dna1[k]=='G')
					ans+=a[1][3];
				else if(dna1[k]=='T')
					ans+=a[1][4];
			}

			if(c=='C'){
				if(dna1[k]=='A')
					ans+=a[2][1];
				else if(dna1[k]=='G')
					ans+=a[2][3];
				else if(dna1[k]=='T')
					ans+=a[2][4];
			}

			if(c=='G'){
				if(dna1[k]=='C')
					ans+=a[3][2];
				else if(dna1[k]=='A')
					ans+=a[3][1];
				else if(dna1[k]=='T')
					ans+=a[1][4];
			}

			if(c=='T'){
				if(dna1[k]=='C')
					ans+=a[1][2];
				else if(dna1[k]=='G')
					ans+=a[1][3];
				else if(dna1[k]=='A')
					ans+=a[4][1];
			}
			k++;
		}
		else{
			int gap = j-k;
			if(dna1[k]=='A')
				ans+=a[1][5];

			else if(dna1[k]=='C')
				ans+=a[2][5];
			
			else if(dna1[k]=='G')
				ans+=a[3][5];

			else if(dna1[k]=='T')
				ans+=a[4][5];
			k=j;		
		}

	}
	return ans;
}
int getDNAAlignment(string dna1, string dna2) {
	
	memset(a, 0, sizeof(a));
	a[1][1] = 5;
	a[1][2] = -1;
	a[1][3] = -2;
	a[1][4] = -1;
	a[1][5] = -3;
	
	a[2][1] = -1;
	a[2][2] = 5;
	a[2][3] = -3;
	a[2][4] = -2;
	a[2][5] = -4;

	a[3][1] = -2;
	a[3][2] = -3;
	a[3][3] = 5;
	a[3][4] = -2;
	a[3][5] = -2;

	a[4][1] = -1;
	a[4][2] = -2;
	a[4][3] = -2;
	a[4][4] = 5;
	a[4][5] = -1;

	a[5][1] = -3;
	a[5][2] = -4;
	a[5][3] = -2;
	a[5][4] = -1;
	
	return getDNAAlignment2(dna1,dna2);
}



int main(){
	string s1,s2;
	s1 = "AGCTATT";
	s2 = "AGCTTTAAA";
 	cout<<getDNAAlignment(s1,s2)<<endl;

}