#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main(){
	int n, k; 
	scanf("%d %d", &n, &k); 
	//chapters, problems per page
	int i,j;
	vector<int> t(n, 0);

	for(i=0; i<n; scanf("%d", &t[i++]));
	//problems per chapter;

	int ans = 0;
	int page_number=0;
	int problems_on_page = 0;

	for(i=0; i<n; i++){
		//for each of the chapters
		page_number++; //new chapter new page;
		problems_on_page = 0;

		for(j=1; j<=t[i]; j++){
			//for each of the problems

			problems_on_page++;
			if(j==page_number) ans++;

			//if problems = k , move to next page
			if(problems_on_page==k){
				page_number++;
				problems_on_page = 0;
			} 	
			
		}
	}
	printf("%d\n", ans);
	return 0;
}