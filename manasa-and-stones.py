def main():
	t = int(raw_input());
	for i in xrange(t):
		n=int(raw_input());
		a=int(raw_input());
		b=int(raw_input());
		c=[];
		if(n==1):
			print 0;
			continue;
		for j in xrange(2**(n-1)):
			c.append(list(('{0:011b}'.format(j))));
		#print c;
		d=[];
		e=0;
		
		for j in xrange(len(c)):
			for k in xrange(n-1):
			#	print c[j];
				if (c[j][-n+1+k] == '0'):
					e+=a;
				else:
					e+=b;
#				print e,
#			print;

			d.append(e);
			e=0;
		d.sort();
		for j in xrange(len(d)-1):
			if(d[j]!=d[j+1]):
				print d[j],
		if(d[len(d)-1] != d[len(d)-2]):
			print d[len(d)-1];
#		print;


main();