public class method{
	public static void main(String[] args){
		System.out.println("Sum from 1 to 10 is " + sum(1, 10));
		System.out.println("Sum from 10 to 30 is " + sum (20, 30));
	}
	//修饰符 返回类型 方法名（参数列表）
	//需要写在主类里
	//与main函数的前后顺序没有关系
	public static int sum(int i1, int i2){
		int sum = 0;
		for (int i = i1; i <= i2; i++){
			sum += i;
		}
		return sum;
	}
}