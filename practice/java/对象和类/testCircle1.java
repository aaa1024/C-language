public class testCircle1{
	public static void main(String[] args){
		Circle1 circle1 = new Circle1();
		System.out.println("The area of the circle of radius" 
			+ circle1.radius + " is " + circle1.getArea());
		Circle1 circle2 = new Circle1(5);
		System.out.println("The area of the circle of radius" 
			+ circle2.radius + " is " + circle2.getArea());
	}
}
class Circle1 {
	double radius;

	Circle1() {
		radius = 1.0;
	}

	Circle1(double newRadius) {
		radius = newRadius;
	}

	double getArea(){
		return radius * radius * Math.PI;
	}
}