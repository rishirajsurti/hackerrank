def sq(n):
	a = int(n**0.5);
	a = a**2;
	return bool(a == n);

def main():
	t = int(raw_input());
	for i in xrange(t):
		a,b = map(int, raw_input().split());
		count=0;
		for j in xrange(a,b+1):
			if(sq(j)):
				count+=1;
		print count;
main();