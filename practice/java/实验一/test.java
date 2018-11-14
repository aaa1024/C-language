
public class test{
	public static void main(String [] args){
		Account a = new Account(1122, 20000, 0.45);
		a.withDraw(2500);
		a.deposit(3000);
		System.out.println(a);
	}
}