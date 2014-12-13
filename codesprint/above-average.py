import numpy as np
def main():
	t=int(raw_input());
	for i in xrange(t):
		a=(raw_input().split());
		a=map(int,a);
		avg=np.average(a[1:]);
		count=0;
		for i in xrange(1,len(a)):
			if(a[i]>avg):
				count+=1;
		print count;
		count=0;
		a=[];

main();