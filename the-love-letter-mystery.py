def mod(a):
	a=int(a);
	if(a>0):
		return a;
	else:
		return -a;

def main():
	t = int(raw_input());
	for i in xrange(t):
		n = raw_input();
		a = list(n);
		count = 0;
		for j in xrange((len(a)/2) ):
			count += mod(ord(a[j])-ord(a[len(a)-1-j]));
		print count;
main();