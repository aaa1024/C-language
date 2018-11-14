import java.util.*;

public class main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		double a, b;
		a = in.nextDouble();
		b = in.nextDouble();
		Point p = new Point(3, 4);
		double ans =  p.getDistanceToBase();
		System.out.println("p1距离原点的距离为"+  ans);
		Point p2 = new Point(a, b);
		ans = p2.getDistanceToBase();
		System.out.println("p2距离原点的距离为"+  ans);
	}
}
class Point{
	double x;
	double y;
	Point(){
		
	}
	Point(double _x, double _y) {
		x = _x;
		y = _y;
	}
	double getDistanceToBase(){
		return Math.sqrt(x*x + y*y);
	}
}