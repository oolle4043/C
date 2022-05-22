import java.util.Scanner;

interface StackInterface {
	int length();

	String pop();

	boolean push(String ob);
}

class StringStack implements StackInterface {
	String[] user = new String[5];
	int count = 0;

	public int length() {
		return user.length;
	}

	public String pop() {
		count--;

		return user[count];
	}

	public boolean push(String ob) {
		user[count] = ob;
		count++;

		return true;
	}
}

public class StackManager {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringStack st = new StringStack();
		String ob;

		for (int i = 0; i < 5; i++) {
			ob = sc.next();
			st.push(ob);
		}

		for (int i = 0; i < 5; i++) {
			System.out.print(st.pop() + " ");
		}

		sc.close();
	}
}
