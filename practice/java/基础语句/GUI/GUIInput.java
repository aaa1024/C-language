import javax.swing.*;
public class GUIInput{
	public static void main(String[] args){
		String s = JOptionPane.showInputDialog(null, "xx", "yy", JOptionPane.QUESTION_MESSAGE);
		System.out.println(s);
	}
}