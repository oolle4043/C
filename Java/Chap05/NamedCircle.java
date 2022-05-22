class Circle {
	private int radius;

	public Circle() {

	}

	public Circle(int radius) {
		this.radius = radius;
	}

	public int getRadius() {
		return radius;
	}
}

public class NamedCircle extends Circle {
	private String name;

	public NamedCircle() {

	}

	public NamedCircle(int radius, String name) {
		super(radius);
		this.name = name;
	}

	public void show() {
		System.out.print(name + ", " + "¹ÝÁö¸§ = " + getRadius());
	}

	public static void main(String[] args) {
		NamedCircle w = new NamedCircle(5, "waffle");
		w.show();
	}
}
