
def main():
	t = int(raw_input());
	for i in xrange(t):
		n = raw_input();
		a = list(n);
		count=0;
		
		for j in xrange(len(a)-1):
		#while(len(a)>=2):
			if(a[j] == a[j+1]):
				count+=1;
		print count;
		count=0;
main();