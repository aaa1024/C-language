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

abstract class GeometricOject{
	protected String color;
	protected boolean filled;
	public GeometricOject(){
		color = "white";
		filled = false;
	}

	public GeometricOject(String color, boolean filled){
		this.color = color;
		this.filled = filled;
	}

	public String getColor(){
		return color;
	}


	public void setColor(String color){
		this.color = color;
	}

	public boolean getFilled(){
		return filled;
	}

	public void setFilled(boolean filled){
		this.filled = filled;
	}


	public String toString(){
		String r;
		if (getFilled()){
			r = "颜色为" + getColor() + "未填充";
		}
		else{
			r = "颜色为" + getColor() + "填充";
		}
		return r;
	}
	public abstract double getArea();
	public abstract double getPerimeter();
}

class Circle extends GeometricOject{
	private double radius;
	public Circle(){}
	public Circle(double radius){
		this.radius = radius;
	}
	public Circle(double radius, String color, boolean filled){
		
		super(color, filled);
		this.radius = radius;
	}
	public double getRadius(){
		return radius;
	}
	public void setRadius(double radius){
		this.radius = radius;
	}
	public double getArea(){
		return radius * radius * Math.PI;
	}
	public double getDiameter(){
		return 2 * radius;
	}
	public double getPerimeter(){
		return 2 * Math.PI * radius; 
	}

	public void printCircle(){
		System.out.print("颜色为" + getColor());
		if (getFilled()){
			System.out.println("未填充");
		}
		else{
			System.out.println("填充");
		}
		System.out.println("圆的半径为" + getRadius());
		System.out.println("圆的直径为" + getDiameter());
		System.out.println("圆的周长为" + getPerimeter());
		System.out.println("圆的面积为" + getArea());
	}
}

class Rectangle extends GeometricOject{
	private double width = 0;
	private double height = 0;
	public Rectangle(){}
	public Rectangle(double width, double height){
		this.width = width;
		this.height = height;
	}
	public Rectangle(double width, double height, String color, boolean filled){
		super(color, filled);
		this.width = width;
		this.height = height;
		
	}
	public double getWidth(){
		return width;
	}

	public void setWidth(double width){
		this.width = width;
	}
	public double getHeight(){
		return height;
	}
	public void setHeight(double height){
		this.height = height;
	}
	public double getArea(){
		return width * height;
	}
	public double getPerimeter(){
		return 2 * (width + height);
	}
}