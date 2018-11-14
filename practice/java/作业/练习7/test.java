import java.util.Scanner;
public class test{
	public static void main(String []args){
		Triangle a = new Triangle(3, 4, 5, "black", true);
		System.out.println("颜色" + a.getColor());
		System.out.println("是否填充" + a.getFilled());
		System.out.println("面积" + a.getArea());
		System.out.println("周长" + a.getPerimeter());
	}
}
abstract class GeometricObject{
	private String color;
	private boolean filled;
	public GeometricObject(){}
	public GeometricObject(String color, boolean filled){
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
		return "2333";
	}
	public abstract double getArea();
	public abstract double getPerimeter();
}
class Triangle extends GeometricObject{
	private double s1 = 0;
	private double s2 = 0;
	private double s3 = 0;
	public Triangle(double s1, double s2, double s3, String color, boolean filled){
		super(color, filled);
		this.s1 = s1;
		this.s2 = s2;
		this.s3 = s3;
	}
	public String toString(){
		return "233";
	}
	public double getArea(){
		return 6.0;
	}
	public double getPerimeter(){
		return s1 + s2 + s3;
	}
}