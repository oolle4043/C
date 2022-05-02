import java.util.Scanner;

class Phone{
	private String name, tel;
	
	public void setArray(String name, String tel) {
		this.name = name;
		this.tel = tel;
	}
	
	public String getName() {
		return name;
	}
	
	public String getTel() {
		return tel;
	}
}

public class PhoneMabager {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int num;
		String name, tel, search;
		boolean flag;
		
		System.out.print("�ο���>> ");
		num = sc.nextInt();
		
		Phone[] phoneArray = new Phone[num];
		
		for(int i = 0; i<phoneArray.length; i++) {
			System.out.print("�̸��� ��ȭ��ȣ(��ȣ�� ���������� �Է�)>> ");
			phoneArray[i] = new Phone();
			name = sc.next();
			tel = sc.next();
			
			phoneArray[i].setArray(name, tel);
		}
		System.out.println("����Ǿ����ϴ�...");
		
		while(true) {
			flag = false;
			System.out.print("�˻��� �̸�>> ");
			search = sc.next();
			
			if(search.equals("exit")) {
				break;
			}
			
			for(int i = 0; i < phoneArray.length; i++) {
				if(search.equals(phoneArray[i].getName())) {
					flag = true;
					System.out.println(phoneArray[i].getName() + "�� ��ȣ�� " + phoneArray[i].getTel());
					break;
				}
			}
			if(flag == false)
				System.out.println(search + " (��)�� �����ϴ�.");
		}		
		
		sc.close();
	}
}
