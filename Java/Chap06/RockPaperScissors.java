import java.util.Scanner;

public class RockPaperScissors {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int user = 0;

		while (user != 4) {
			System.out.println("가위(1), 바위(2), 보(3), 끝내기(4)>> ");
			user = sc.nextInt();

			int com = ((int) Math.random() * 3 + 1);

			switch (user) {
			case 1:
				if (com == 1) {
					System.out.println("사용자 가위 : 컴퓨터 가위");
					System.out.println("비겼습니다.");
					System.out.println();
				} else if (com == 2) {
					System.out.println("사용자 가위 : 컴퓨터 바위");
					System.out.println("사용자가 졌습니다.");
					System.out.println();
				} else {
					System.out.println("사용자 가위 : 컴퓨터 보");
					System.out.println("사용자가 이겼습니다.");
					System.out.println();
				}
				break;

			case 2:
				if (com == 1) {
					System.out.println("사용자 바위 : 컴퓨터 가위");
					System.out.println("사용자가 이겼습니다.");
					System.out.println();
				} else if (com == 2) {
					System.out.println("사용자 바위 : 컴퓨터 바위");
					System.out.println("비겼습니다.");
					System.out.println();
				} else {
					System.out.println("사용자 바위 : 컴퓨터 보");
					System.out.println("사용자가 졌습니다.");
					System.out.println();
				}
				break;

			case 3:
				if (com == 1) {
					System.out.println("사용자 보 : 컴퓨터 가위");
					System.out.println("사용자가 졌습니다.");
					System.out.println();
				} else if (com == 2) {
					System.out.println("사용자 보 : 컴퓨터 바위");
					System.out.println("사용자가 이겼습니다.");
					System.out.println();
				} else {
					System.out.println("사용자 보 : 컴퓨터 보");
					System.out.println("비겼습니다.");
					System.out.println();
				}
				break;
			}
		}
		System.out.println("프로그램을 종료합니다.");
		sc.close();
	}

}
