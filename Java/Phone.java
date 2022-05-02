import java.util.Scanner;

public class Phone {
	private String name, tel;
	
	public Phone() {
		name = "";
		tel = "";
	}
	
	public Phone(String name, String tel) {
		this.name = name;
		this.tel = tel;
	}
	
	public String getName() {
		return name;
	}
	
	public String getTel() {
		return tel;
	}
	
	public static void main(String[] args) {
		Phone user1 = new Phone();
		Phone user2 = new Phone();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("�̸��� ��ȭ��ȣ �Է� >>");
		user1.name = sc.next();
		user1.tel = sc.next();
		
		System.out.print("�̸��� ��ȭ��ȣ �Է� >>");
		user2.name = sc.next();
		user2.tel = sc.next();
		
		System.out.println(user1.getName() + "�� ��ȣ " + user1.getTel());
		System.out.println(user2.getName() + "�� ��ȣ " + user2.getTel());
		
		sc.close();
	}
}
