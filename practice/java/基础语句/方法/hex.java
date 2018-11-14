// 实现十进制转换成十六进制
import java.util.Scanner;
public class hex{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.print("Please input a number:");
		int a = in.nextInt();
		String ans = "";
		while (a > 0){
			ans = toHexchar(a % 16) + ans;
			a /= 16;
		}
		System.out.println(ans);
	}

	public static char toHexchar(int x){
		if (x >= 0 && x <= 9){
			//int t = '0' - 0;
			return (char)(x + '0');
		}
		else if (x >= 10 && x <= 15){
			int t = 'A' - 10;
			return (char)(x + t);
		}
		return 'e';
	}
}