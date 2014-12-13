#import numpy as np;
def main():
	n,m = map(int, raw_input().split());
	x=[];
	for i in xrange(n):
		x.append(0);
#	x=map(int,list(np.zeros(n)));
	for i in xrange(m):
		a,b,k = map(int,raw_input().split());
		for j in xrange(a-1,b):
			x[j]+=k;
	print (sum(x)/len(x));
main();