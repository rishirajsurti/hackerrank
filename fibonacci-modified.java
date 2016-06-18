import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		BigInteger a = sc.nextBigInteger();
		BigInteger b = sc.nextBigInteger();
		BigInteger c = BigInteger.ZERO;

		int n = sc.nextInt();
		for(int i = 3; i <= n; i++){
			a = a.multiply(a);
			c = a.add(b);
			b = c;
			a = b;
		}

		System.out.println(c);
		
	}
}