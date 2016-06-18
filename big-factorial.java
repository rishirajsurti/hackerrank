import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		BigInteger fact = new BigInteger("1");
		for(int i = 1; i <= N; i++){
			fact = fact.multiply(new BigInteger(i+""));
		}
		System.out.println(fact.toString());
	}
}