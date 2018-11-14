public class Fibonacci{
	public static void main(String[] args){
		long a[] = new long[101];
		a[1] = a[2] = 1;
		for (int i = 3; i <= 50; i++){
			a[i] = a[i - 1] + a[i - 2];
		}
		for (int i = 1; i <= 50; i++){
			System.out.println(a[i]);
		}
	}
}