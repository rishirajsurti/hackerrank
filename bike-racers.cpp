#include <cmath>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

#define INF 1e9

struct point{
	double x, y;
};

double dist(point p1, point p2){
	return hypot(abs(p1.x-p2.x), abs(p1.y-p2.y));
}

double n, m, k;

vector<point> bikers;
vector<point> bikes;
vector<double> mintime;

double solvee(double u){
	double ret = INF;
	for(double i = 0; i < n; i++){
		ret = min(ret, dist(bikers[i], bikes[u]));
	}
	return ret;
}

int main(){
	scanf("%lf %lf %lf", &n, &m, &k);
	
	for(double i = 0; i < n; i++){
		point b;
		scanf("%lf %lf", &b.x, &b.y);
		bikers.push_back(b);
	}
	mintime.assign(m,0);
	for(double i = 0; i < m; i++){
		point b;
		scanf("%lf %lf", &b.x, &b.y);
		bikes.push_back(b);
		mintime[i] = solvee(i);
	}
	sort(mintime.begin(), mintime.end());
	printf("%.0lf\n", mintime[k-1]*mintime[k-1]);
	//cout<<mintime[k-1]*mintime[k-1]<<endl;
	return 0;
}