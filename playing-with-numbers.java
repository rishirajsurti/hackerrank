import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		BigInteger t [] = new BigInteger[n];
		for(int i = 1; i <= n; i++){
			t[i-1] = sc.nextBit
		}
		int c = sc.nextInt();
		while(c-- > 0){
			BigInteger x = BigInteger.valueOf(sc.nextInt());
			BigInteger y = BigInteger.valueOf(sc.nextInt());
			BigInteger n = BigInteger.valueOf(sc.nextInt());
			System.out.println(x.modPow(y,n));
		}
	}
}