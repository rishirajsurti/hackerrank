
def main():
	n,m = map(int, raw_input().split());
	a=[];
	for i in xrange(n):
		a.append(int(raw_input(),2));
		p = ((2**m )- 1);
		count =0;
		max_or =0 ;
	d={};
	for j in xrange(len(a)):
		for k in xrange(j,len(a)):
			x=(a[j]|a[k]);
			x='{0:b}'.format(x);
			x=list(x);
			y=x.count('1');
			if y in d:
				d[y]+=1;
			else:
				d[y]=1;
			if y > max_or:
				max_or = y;
	#print d,max_or;
	print max_or;
	print d[max_or];
main();