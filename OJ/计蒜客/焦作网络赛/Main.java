import java.util.Scanner;
import java.math.*;
public class Main{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		BigInteger b;
		while(T>0){
			b=input.nextBigInteger();
			BigInteger one = new BigInteger("1");
			b=b.subtract(one);
			BigInteger m1 = new BigInteger("1000000006");
			b=b.mod(m1);
			long b1=b.intValue();
			long a=2,sum=1,mode=1000000007;
			while (b1 > 0) {
			
				if (b1 % 2 == 1)	
					sum = (sum * a) % mode;
		 
				b1 /= 2;
				a = (a * a) % mode;
			}
			System.out.println(sum);
			T--;
		}
	}
}
