class Address{
	private String state;
	private String street;
	private String city;
	private String no;
	public Address(String state, String street
		, String city, String no){
		this.state = state;
		this.street = street;
		this.city = city;
		this.no = no;
	}
	public String toString(){
		String to;
		to = "state:" + state + "\n"
		+ "street:" + street + "\n"
		+ "city:" + city + "\n"
		+ "no:" + no + "\n";
		return to; 
	}
}
class Person{
	private String name;
	private char sex;
	protected Address adr;
	public Person(){}
	public Person(String name, char sex, Address adr){
		this.name = name;
		this.sex = sex;
		this.adr = adr;
	}
	public void setName(String name){
		this.name = name;
	}
	public String getName(){
		return name;
	}
	public void setSex(char sex){
		this.sex = sex;
	}
	public char getSex(){
		return sex;
	}
	public void setAdr(Address adr){
		this.adr = adr;
	}
	public Address getAdr(){
		return adr;
	}
	public String toString(){
		return "name: " + name + "\n"
		+ "sex: " + sex + "\n" + adr;
	}
}
class Student extends Person{
	private String stNo;
	private int grade;
	public Student(){}
	public Student(String name, char sex, Address adr, String stNo, int grade){
		super(name, sex, adr);
		this.stNo = stNo;
		this.grade = grade;
	}
	public void setStNo(String stNo){
		this.stNo = stNo;
	}
	public String getStNo(){
		return stNo;
	}
	public void setGrade(int grade){
		this.grade = grade;
	}
	public int getGrade(){
		return grade;
	}
	public String toString(){
		String to = super.toString()
		+ "stNo:" + stNo + "\n"
		+ "grade:" + grade + "\n";
		return to;
	}
}
class Teacher extends Person{
	private int gongHao;
	public Teacher(){}
	public Teacher(String name, char sex, Address adr, int gongHao){
		super(name, sex, adr);
		this.gongHao = gongHao;
	}
	public void setStudentGrade(Student s, int grade){
		s.setGrade(grade);
	}
}