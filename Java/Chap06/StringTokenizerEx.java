import java.util.StringTokenizer;
import java.util.Scanner;

public class StringTokenizerEx {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String user = sc.nextLine();
		StringTokenizer st = new StringTokenizer(user, " ");
		
		while(!user.equals("exit")) {
			int n = st.countTokens();
			
			System.out.println("어절 개수는 " + n);
			
			user = sc.nextLine();
			st = new StringTokenizer(user, " ");
		}
		System.out.println("종료합니다...");
		
		sc.close();
	}

}
