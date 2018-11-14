public class for_each{
	public static void main(String[] args){
		int [] a = new int [11];
		a[1] = 1; a[2] = 1;
		for (int i = 3; i <= 10; i++){
			a[i] = a[i - 1] + a[i - 2];
		}

		for (int t:a){
			System.out.println(t + "\n");
		}
	}
}