import java.util.*;
public class main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		double a;
		double b;
		a = in.nextDouble();
		b = in.nextDouble();
		Rectangle r = new Rectangle(a, b);
		System.out.println("宽为" + a + "高为 " + b + "面积为 " + r.getArea());
		System.out.println("周长为 " + r.getPerimeter());
	}
}
class Rectangle{
	double width = 1;
	double height = 1;
	Rectangle(){

	}
	Rectangle(double _width, double _height){
		width = _width;
		height = _height;
	}
	double getArea(){
		return width * height;
	}
	double getPerimeter(){
		return 2 * (width + height);
	}
}