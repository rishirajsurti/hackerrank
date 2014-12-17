def main():
	t = int(raw_input());
	for i in xrange(t):
		m = int(raw_input());
		n = int(raw_input());
		a = map(int, raw_input().split());
		b = a[:];
		b.sort();
		for j in xrange(len(b)):
			for k in xrange(j+1,len(b)):
				if(b[j]+b[k] == m):
					x,y = b[j],b[k];	
		x=a.index(x);
		a[x]+=1;
		y=a.index(y);
		c = [x,y];
		c.sort();
		print c[0]+1,c[1]+1;
main();