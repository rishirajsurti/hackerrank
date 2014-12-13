def main():
	l = int(raw_input());
	r = int(raw_input());
	max = 0;
	for i in xrange(l,r+1):
		for j in xrange(i,r+1):
			if(i^j > max):
				max = i^j;
	print max;
main();
