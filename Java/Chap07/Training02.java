import java.util.*;

public class Training02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<String> a = new ArrayList<String>();

		for (int i = 0; i < 5; i++) {
			a.add(String.valueOf(sc.next()));
		}

		for (int i = 0; i < a.size(); i++) {
			if (a.get(i).equals("A"))
				System.out.print("4.0 ");
			else if (a.get(i).equals("B"))
				System.out.print("3.0 ");
			else if (a.get(i).equals("C"))
				System.out.print("2.0 ");
			else if (a.get(i).equals("D"))
				System.out.print("1.0 ");
			else
				System.out.print("0.0 ");
		}
		sc.close();
	}
}
