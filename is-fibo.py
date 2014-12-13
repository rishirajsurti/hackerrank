def is_square(n):
	m = int(n**0.5);
	return bool(m*m == n);

def fibo(n):
	m=n*n;
	if( is_square(5*m+4) or is_square(5*m-4)):
		print "IsFibo";
	else:
		print "IsNotFibo";
		
def main():
	t = int(raw_input());
	for i in xrange(t):
		n = int(raw_input());
		fibo(n);
main();