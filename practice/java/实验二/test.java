import java.util.Scanner;
public class test{
	public static void main(String [] args){
		Scanner in = new Scanner(System.in);
//		System.out.println("Please input name, sex");
		String name = "andy";
		char sex = 'm';
		String stNo = "2017011456";
		//	public Address(String state, String street
		//, String city, String no){
		Address adr = new Address("China", "No. 35 North Fourth Ring Road"
			, "BeiJing", "35");
		Student a = new Student(name, sex, adr, stNo, 0);
		//public Teacher(String name, char sex, Address adr, int gongHao){
		Teacher b = new Teacher("hh", 'f', adr, 10000);
		b.setStudentGrade(a, 100);
		System.out.println("grade:" + a.getGrade());
		System.out.println(a);
	}
}