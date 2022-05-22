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
		
		System.out.print("인원수>> ");
		num = sc.nextInt();
		
		Phone[] phoneArray = new Phone[num];
		
		for(int i = 0; i<phoneArray.length; i++) {
			System.out.print("이름과 전화번호(번호는 연속적으로 입력)>> ");
			phoneArray[i] = new Phone();
			name = sc.next();
			tel = sc.next();
			
			phoneArray[i].setArray(name, tel);
		}
		System.out.println("저장되었습니다...");
		
		while(true) {
			flag = false;
			System.out.print("검색할 이름>> ");
			search = sc.next();
			
			if(search.equals("exit")) {
				break;
			}
			
			for(int i = 0; i < phoneArray.length; i++) {
				if(search.equals(phoneArray[i].getName())) {
					flag = true;
					System.out.println(phoneArray[i].getName() + "의 번호는 " + phoneArray[i].getTel());
					break;
				}
			}
			if(flag == false)
				System.out.println(search + " (이)가 없습니다.");
		}		
		
		sc.close();
	}
}
