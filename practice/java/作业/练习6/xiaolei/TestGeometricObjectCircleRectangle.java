import java.util.Scanner;

public class TestGeometricObjectCircleRectangle {

public static void main(String[] a){

Scanner input = new Scanner(System.in);

Circle c = new Circle(input.nextDouble(), input.next(), input.nextBoolean());

c.printCircle();

System.out.println();

System.out.println();



Rectangle r = new Rectangle();

r.setWidth(input.nextDouble());

r.setHeight(input.nextDouble());

r.setColor(input.next());

r.setFilled(input.nextBoolean());

System.out.println(r.toString());

System.out.println("矩形的宽为" + r.getWidth() + "\n矩形的长为" + r.getHeight() + "\n矩形的周长为" + r.getPerimeter() + "\n矩形的面积为" + r.getArea());

}

}

abstract class GeometricObject {
	protected String color;
	protected boolean filled;
	public GeometricObject(){
		color = "white";
		filled = false;
	}
	public GeometricObject(String color, boolean filled){
		this.color = color;
		this.filled = filled;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public boolean getFilled() {
		return filled;
	}
	public void setFilled(boolean filled) {
		this.filled = filled;
	}
	
	
	public String toString() {
		String s;
		String f;
		if(getFilled()) {
			f = "填充";
		}
		else {
			f = "未填充";
		}
		s = "颜色为" + color + f ;
		return s;
	}
	public abstract double getArea();
	public abstract double getPerimeter();
}
class Rectangle extends GeometricObject{
	private double width = 0, height = 0;
	Rectangle(){}
	Rectangle(double width, double height, String color, boolean filled){
		super(color, filled);
		this.width = width;
		this.height = height;
	}
	public double getWidth() {
		return width;
	}
	public void setWidth(double width) {
		this.width = width;
	}
	public double getHeight() {
		return height;
	}
	public void setHeight(double height) {
		this.height = height;
	}
	public double getArea() {
		double A = width * height;
		return A;
	}
	public double getPerimeter() {
		double P = (width + height) * 2;
		return P;
	}
}

class Circle extends GeometricObject{
	private double radius = 0;
	Circle(){
		
	}
	Circle(double radius, String color, boolean filled){
		super(color, filled);
		this.radius = radius;
	}
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	public double getArea() {
		double A = Math.PI * radius * radius;
		return A;
	}
	public double getPerimeter() {
		double P = Math.PI * 2 * radius;
		return P;
	}
	public double getDiameter() {
		double D = 2 * radius;
		return D;
	}
	public void printCircle() {
		System.out.println(this.toString());
		System.out.println("圆的半径为"+getRadius()+"\n圆的直径为"+getDiameter()+"\n圆的周长为"+getPerimeter()+"\n圆的面积为"+getArea());
	}
}
