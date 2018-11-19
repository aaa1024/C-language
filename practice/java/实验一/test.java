
public class test{
	public static void main(String [] args){
		Account a = new Account(1122, 20000, 0.45);
		System.out.println("initial:");
		System.out.println(a);
		System.out.println();
		a.withDraw(2500);
		System.out.println("After withdraw 2500$");
		System.out.println(a);
		a.deposit(3000);
		System.out.println("After deposit 3000$");
		System.out.println(a);
	}
}