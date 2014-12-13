def fd(n):
	m=n;
	count=0;
	while(1):
		a=m%10;
		if(a!=0 and n%a==0):
			count=count+1;
		m=m/10;
		if(m==0):
			break;
	return count;

def main():
	t = int(raw_input());	
	for i in xrange(t):
		n = int(raw_input());
		print fd(n);
main();