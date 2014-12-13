def main():
	t=int(raw_input());
	for i in xrange(t):
		x=raw_input();
		y=list(x);
		count=0;
		for j in xrange(len(y)-1):
			if(ord(y[j+1])>=ord(y[0]) and count==0):
				y[0],y[j+1]=y[j+1],y[0];
				count=1;
		y=''.join(y);
		if(x==y):
			print "no answer"
		else:
			print y;
		x=[];
		y=[];
		


main();
