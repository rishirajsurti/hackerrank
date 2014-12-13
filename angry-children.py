def main():
	n = int(raw_input());
	k = int(raw_input());
	a=[];
	for i in xrange(n):
		a.append(int(raw_input()));
	a.sort();
	fairness=999999999;
	for j in xrange(len(a)-1-k):
		b=a[j:j+k];
		#print b;
		if (max(b)-min(b)) < fairness:
			fairness = (max(b)-min(b));
	print fairness;
main();