import java.util.Scanner;
import java.util.StringTokenizer;

public class String_IntegerEx {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int sum = 0;
		String user;
		user = sc.nextLine();

		StringTokenizer st = new StringTokenizer(user, " + ");

		while (st.hasMoreTokens()) {
			String token = st.nextToken();
			sum += Integer.parseInt(token);
		}
		System.out.println("합은 " + sum);

		sc.close();
	}
}
