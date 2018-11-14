public class TestLady{

    public static void main(String[] args){

        Cat cat = new Cat("jack","blue");

        Dog dog = new Dog("jerry","black");

        Lady[] ladys ={ new Lady("wang",cat),new Lady("zhang ",dog)};

        for(Lady lady:ladys)

           System.out.println(lady+ ";Her pet cry  "+lady.myPetCry());

      }
}

abstract class Animal{
	protected String name;
	public Animal(String name){
		this.name = name;
	}
	public String getName(){
		return name;
	}
	public abstract String cry();
}

class Cat extends Animal{
	private String eyesColor;
	public Cat(String name, String color){
		super(name);
		this.eyesColor = color;
	}
	public String cry(){
		return "miaomiao...}";
	}
	public String toString(){
		String f = "Cat{name=" + name + ";eyesColor=" + eyesColor + "}";
		return f;
	}
}
class Dog extends Animal{
	private String furColor;
	public Dog(String n, String color){
		super(n);
		this.furColor = color;
	}
	public String cry(){
		return "wangwang...}";
	}
	public String toString(){
		String f = "Dog{name=" + name + ";furColor=" + furColor + "}";
		return f;
	}
}
class Lady {
	private String name;
	private Animal pet;
	public Lady(String name, Animal pet){
		this.name = name;
		this.pet = pet;
	}
	public String myPetCry(){
		return pet.cry();
	}
	public String toString(){
		String f = "Lady{name=" + name + ",pet=" + pet + "}";
		return f;

	}
}