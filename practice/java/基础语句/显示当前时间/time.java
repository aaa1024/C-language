public class time{
	public static void main(String[] args){
		while (true){
			long totalMilliseconds = System.currentTimeMillis();

			long totalSeconds = totalMilliseconds / 1000;

			long currentSeconds = totalSeconds % 60;

			long totalMinutes = totalSeconds / 60;

			long currentMinutes = totalMinutes % 60;

			long totalHour = totalMinutes / 60;

			long currentHour = totalHour % 24 + 8;

			System.out.println("currentHour" + currentHour
				+ "currentMinutes:" + currentMinutes
				+ "currentSeconds" + currentSeconds);
		}
	}
}