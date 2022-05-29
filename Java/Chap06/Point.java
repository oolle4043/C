class MyPoint {
	private int x, y;

	public MyPoint(int x, int y) {
		this.x = x;
		this.y = y;
	}

	public String toString() {
		return "MyPont (" + x + ", " + y + ")";
	}
}

public class Point {
	public static void main(String[] args) {
		MyPoint a = new MyPoint(3, 20);
		System.out.println(a);
	}
}
