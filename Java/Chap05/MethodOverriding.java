import java.util.Scanner;

abstract class Shape {
	protected String shapeArr[];

	public abstract void menu();

	public abstract void shape();
	
	public abstract void setArr(String shape);
	
	public abstract void arrDel(int del);
}

public class MethodOverriding extends Shape {
	String[] shapeArr = new String[10];
	int count = 0;
	
	public void menu() {
		System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4)>>");
	}

	public void shape() {
		System.out.print("도형 종류 Line(1), Rect(2), Circle(3)>>");
	}
	
	public void setArr(String shape) {
		shapeArr[count] = shape;
		count++;
	}
	
	public void arrDel(int del) {
		String[] temp = new String[shapeArr.length - 1];
		int c = 0;
		
		for(int i = 0; i < shapeArr.length; i++) {
			if (i == del) {
				continue;
			}
			temp[c] = shapeArr[i];
			c++;
		}
		for(int i = 0; i < temp.length; i++) {
			shapeArr[i] = temp[i];
		}
		
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		MethodOverriding m = new MethodOverriding();

		int user, user2, del;

		while (true) {
			m.menu();
			user = sc.nextInt();
			
				if(user == 1) {
					m.shape();
					user2 = sc.nextInt();
					
					switch(user2){
					case 1:
						m.setArr("Line");
						break;
					case 2:
						m.setArr("Rect");
						break;
					case 3:
						m.setArr("Circle");
						break;						
					}
				}
				else if (user == 2) {
					System.out.print("삭제할 도형의 위치>>");
					del = sc.nextInt();
					m.arrDel(del);
				}
				else if(user == 3) {
					for(int i = 0; m.shapeArr[i] != null; i++) {
						System.out.println(m.shapeArr[i]);
					}
				}
				else if(user == 4) {
					break;
				}
				
		}
		sc.close();
	}
}
