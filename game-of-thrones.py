d = {}
def main():
	n = raw_input();
	a = list(n);
	for i in xrange(len(a)):
		if a[i] in d:
			d[a[i]]+=1;
		else:
			d[a[i]]=1;

	if(len(a)%2 == 0):
		for i in d:
			if(d[i]%2 != 0):
				print "NO";
				return;
		print "YES";
		return;

	elif(len(a)%2 != 0):
		count=0;
		for i in d:
			if(d[i]%2 != 0):
				count+=1;
		if(count == 1):
			print "YES";
			return;
		else:
			print "NO";
			return;
#	print d;

main();