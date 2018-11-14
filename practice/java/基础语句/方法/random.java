//生成随机字符串
public class random{
	public static char r(char a, char b){
		return (char)(a + Math.random() * (b - a + 1));
	}
	public static void main(String[] args){
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 20; j++){
				int a = (int)(1 + Math.random() * 3);
				//System.out.println(a);
				if (a == 1)
					System.out.print(r('a', 'z'));
				else if (a == 2)
					System.out.print(r('A', 'Z'));
				else if (a == 3)
					System.out.print(r('0', '9'));
			}
			System.out.println();
		}
	}
}