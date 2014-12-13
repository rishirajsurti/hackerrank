def main():
	t=int(raw_input());
	for i in xrange(t):
		x=raw_input();
		y=raw_input();
		countkeys=0;
		for j in xrange(len(x)):
			if(y.count(x[j])>0):
				countkeys+=1;
		print countkeys;
		countkeys=0;
		x=[]
		y=[]
main();
