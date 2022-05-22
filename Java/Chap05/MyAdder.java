interface AdderInterface {
	int add(int x, int y);

	int add(int n);
}

public class MyAdder implements AdderInterface {
	public int add(int x, int y) {
		return x + y;
	}

	public int add(int n) {
		int result = 0;
		for (int i = 1; i <= n; i++) {
			result += i;
		}
		return result;
	}

	public static void main(String[] args) {
		MyAdder adder = new MyAdder();
		System.out.println(adder.add(5, 10));
		System.out.println(adder.add(10));
	}
}
