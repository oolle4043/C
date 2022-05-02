import java.util.Scanner;

class Rect{
	private int width, height;
	
	public Rect() {
		width = 0;
		height = 0;
	}
	
	public Rect(int width, int height) {
		this.width = width;
		this.height = height;
	}
	
	public int getArea() {
		return width * height;
	}
}

public class RectArray {	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Rect[] rectArray = new Rect[4];
		
		int sum = 0;
		int w, h;
		
		for(int i = 0; i < rectArray.length; i++) {
			System.out.print((i+1) + " �ʺ�� ���� >>");
			w = sc.nextInt();
			h = sc.nextInt();
			
			rectArray[i] = new Rect(w, h);
			sum += rectArray[i].getArea();
		}
		
		System.out.println("�����Ͽ����ϴ�...");
		
		System.out.println("�簢���� ��ü ���� " + sum);
		
		sc.close();
	}
}
