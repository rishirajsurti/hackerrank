#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n;
vi a;
bool allNine(){
	for(int i = 0; i < n; i++)
		if(a[i] != 9) return false;
	return true;
}

void generateNextPalindromeUtil(){
	int mid = n/2;
	bool leftSmaller = false;
	int i = mid-1;
	int j = (n%2) ? mid+1 : mid;

	while(i >= 0 && a[i] == a[j])
		i--, j++;

	if( i < 0 || a[i] < a[j])
		leftSmaller = true;

	while(i >= 0)
		a[j++] = a[i--];
	
	if(leftSmaller){
		int carry = 1;
		i = mid - 1;
		
		if(n%2){
			a[mid] += carry;
			carry = a[mid] / 10;
			a[mid] %= 10;
		}
		else j = mid;


		while(i >= 0){
			a[i] += carry;
			carry = a[i] / 10;
			a[i] %= 10;
			a[j++] = a[i--];
		} 

	}
}

void generateNextPalindrome(){

	if(allNine()){
		printf("1 ");
		for(int i = 0; i < n-1; i++)
			printf("0 ");
		printf("1\n");
	}
	else{
		generateNextPalindromeUtil();
		
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear(); a.assign(n, 0);
		for(int i =0; i < n; scanf("%d", &a[i++]));

		generateNextPalindrome();
	}
}