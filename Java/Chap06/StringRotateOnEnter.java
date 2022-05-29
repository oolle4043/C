import java.util.Scanner;

public class StringRotateOnEnter {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("문자열을 입력하세요. 빈 칸이 있어도 되고 영어 한글 모두 됩니다.");
		String text = sc.nextLine();
		
		System.out.println("<Enter>를 입력하면 문자열이 한 글자씩 회전합니다.");
		
		while(true) {
			String key = sc.nextLine();
			
			if(key.equals("")) {
				String first = text.substring(0, 1); // 0부터 1 인덱스 전까지를 first 변수에 넣는다.
				String last = text.substring(1); // 1 인덱스 부터 모든 문자열 last 변수에 넣는다.
				text = last.concat(first); // text 변수에 last 변수에있는 문자열 + first 변수에 있는 문자를 붙여서 출력
				System.out.print(text + " >> ");
				
			}
			else if(text.equals("p")) {
				break;
			}
			else
				System.out.print(text + " >> ");
		}
		System.out.println("종료합니다...");
		sc.close();
	}
}
