public class Account{
	private int id = 0;
	private double balance = 0;
	private double annualInteresRate = 0;
	private java.util.Date dateCreated;
	public Account(){
		dateCreated = new java.util.Date();
	}
	public Account(int id, double balance, double annualInteresRate){
		this.id = id;
		this.balance = balance;
		this.annualInteresRate = annualInteresRate;
		dateCreated = new java.util.Date();
	}
	public int getId(){
		return id;
	}
	public void setId(int id){
		this.id = id;
	}
	public double getBalance(){
		return balance;
	}
	public void setBalance(double balance){
		this.balance = balance;
	}
	public double getAnnualInteresRate(){
		return annualInteresRate;
	}
	public void setAnnualInteresRate(double annualInteresRate){
		this.annualInteresRate = annualInteresRate;
	}
	public java.util.Date getDateCreated(){
		return dateCreated;
	}
	public double getMonthlyInterestRate(){
		return annualInteresRate / 12.0;
	}
	public void withDraw(double money){
		balance -= money;
	}
	public void deposit(double money){
		balance += money;
	}
	public String toString(){
		String a;
		a = "balance:" + balance + "\n"
		+ "MonthlyInterestRate:"
		+ getMonthlyInterestRate()  + "\n"
		+ "createdDate:" + dateCreated + "\n";
		return a;

	}
}