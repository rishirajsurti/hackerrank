import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		BigInteger a = sc.nextBigInteger();
		BigInteger b = sc.nextBigInteger();
		BigInteger c = new BigInteger("0");

		int n = sc.nextInt();
		for(int i = 3; i <= n; i++){
			c = b;
			b = b.multiply(b);
			b = b.add(a);
			a = c;

		//	System.out.println(a+ " " + b+ " "+ c);

		}

		System.out.println(b);
		
	}
}