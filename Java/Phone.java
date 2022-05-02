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
		
		System.out.print("이름과 전화번호 입력 >>");
		user1.name = sc.next();
		user1.tel = sc.next();
		
		System.out.print("이름과 전화번호 입력 >>");
		user2.name = sc.next();
		user2.tel = sc.next();
		
		System.out.println(user1.getName() + "의 번호 " + user1.getTel());
		System.out.println(user2.getName() + "의 번호 " + user2.getTel());
		
		sc.close();
	}
}
