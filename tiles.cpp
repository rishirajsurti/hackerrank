#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
long long int getMinSplit(long long int width,long long int height, long long int nTiles) {


	if(nTiles > (width*height))
		return -1;
	else if(nTiles== (width*height))
		return 0;

	else if(nTiles%width==0 && ( (nTiles/width) < height) ){
			return 1;
	}
	else if(nTiles%height==0 && ( (nTiles/height) < width) ){
			return 1;
	}
	else{
		long long int ans = -1;
		long long int i,j,k;
		long long int min;
		//min = ( (width>height) ? (height:width)));
		if(width > height)
			min = height;
		else
			min = width;

		for(i=1; i<=(nTiles/min); i++){
			if(nTiles%i==0 && i<width && i<height && ans!=2){
				k = (nTiles/i);
				if(k<width && k<height){
					ans = 2;
					break;
				}
			}
		}
		/*for(i=1; i<=height; i++){
			for(j=1; j<=width; j++){
				if(i*j == nTiles)
					ans = 2;
			}
		}*/
		return ans;
	}

}


int main(){
//	cout<<getMinSplit(2,2,1)<<endl;
	cout<<getMinSplit(226800000,10000000,938071715)<<endl;
	return 0;
}
