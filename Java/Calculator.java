// 계산기 프로그램
import java.util.Scanner;	// 사용자로부터 입력을 받기 위한 Scanner class import

public class Calculator {	// Calculator class 선언
	public static void main(String[] args) {	// 프로그램이 시작되는 메인 메소드
		Scanner sc = new Scanner(System.in);	// Scanner 객체 생성
		
		int choice;	// 사용자에게 정수와 실수중 어떤 것으로 계산할지 정하는 변수이다.
		double operand1, operand2;	// 사용자에게 실수 값을 저장 받기 위한 변수 이다.
		int[] int_operand = new int[2];	// 사용자에게 정수 2개를 받는 배열이다.
		double[] double_operand = new double[2];	// 사용자에게 실수 2개를 받는 배열이다.
		char operator;	// 연산자를 받는 변수
		boolean check;	// 프로그램을 종료할지 계속할지 선택할 수 있는 boolean형 변수이다.
		String con;	// 사용자에게 '종료' 와 '계속' 둘중 하나를 입력받아 저장하는 변수이다.
		
		while(true)	// 계산기를 계속 실행되게 하는 무한 루프 while문
		{
			System.out.print("1. 정수\n2. 실수\n무엇을 선택하시겠습니까?: ");	// 사용자에게 정수와 실수중 어떤것을 할지 정하게 하는 print문이다.
			choice = sc.nextInt();	// 사용자에게 입력받는 1 또는 2의 정수를 저장한다.
			
			if(choice == 1)	// choice에 1이 저장되면 해당 if문 실행
			{
				System.out.print("\n다음과 같은 형식으로 입력하세요.\nA + B\n-> ");	// 원하는 계산식을 입력하라는 print문이다.
				int_operand[0] = sc.nextInt();	// 사용자에게 첫번째 정수를 입력 받아 저장하는 변수이다.
				operator = sc.next().charAt(0);	// 연산자를 받아 저장한다.
				int_operand[1] = sc.nextInt();	// 사용자에게 두번째 정수를 입력 받아 저장하는 변수이다.
				
				System.out.print("입력된 정수: ");	// 입력된 두 정수를 알려주기 위한 print문
				
				for(int i = 0; i < 2; i++)	// i는 0 이고 i 가 2 보다 작을때까지 반복하여 2번 반복하게 한다.
				{
					System.out.print(int_operand[i] + " ");	// 입력된 정수 i번째 인덱스를 출력해준다.
				}
				
				System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
				
				switch(operator)	// 사용자에게 입력 받은 연산자에 따라 해당 case에 들어가게 한다.
				{
				case '+':	// 연산자가 + 일때 실행된다.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] + int_operand[1]));	// 사용자에게 입력받은 정수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '-':	// 연산자가 - 일때 실행된다.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] - int_operand[1]));	// 사용자에게 입력받은 정수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '*':	// 연산자가 * 일때 실행된다.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] * int_operand[1]));	// 사용자에게 입력받은 정수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '/':	// 연산자가 / 일때 실행된다.
					try	// 예외 처리를 위한 try-catch문 선언이다.
					{
						System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] / int_operand[1]));	// 사용자에게 입력받은 정수와 연산자를 출력해주고 계산 값을 출력해준다.
						System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					}
					catch(ArithmeticException e)	// 나눗셈 과정에서 0 으로 나눌수 없다는 에러를 예외 처리한다.
					{
						System.out.println("\n0으로 나눌수 없습니다. 처음부터 다시 입력해주세요.\n");	// 예외처리 되었음을 알려주는 print문이다.
						continue;	// 예외 처리 되어 처음부터 다시 입력하게 한다.
					}
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '%':	// 연산자가 % 일때 실행된다.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] % int_operand[1]));	// 사용자에게 입력받은 정수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				}
			}
			
			else if(choice == 2)	// choice에 2이 저장되면 해당 if문 실행
			{
				System.out.print("\n다음과 같은 형식으로 입력하세요.\nA + B\n-> ");	// 원하는 계산식을 입력하라는 print문이다.
				operand1 = sc.nextDouble();	// 사용자에게 첫번째 실수를 입력 받아 저장하는 변수이다.
				operator = sc.next().charAt(0);	// 연산자를 받아 저장한다.
				operand2 = sc.nextDouble();	// 사용자에게 두번째 실수를 입력 받아 저장하는 변수이다.
				
				double_operand[0] = operand1;	// operand1 에 들어있는 실수를 double_operand[0]번째 인덱스에 대입한다.
				double_operand[1] = operand2;	// operand2 에 들어있는 실수를 double_operand[1]번째 인덱스에 대입한다.
				
				System.out.print("입력된 실수: ");	// 입력된 두 정수를 알려주기 위한 print문
				
				for(int i = 0; i < 2; i++)	// i는 0 이고 i 가 2 보다 작을때까지 반복하여 2번 반복하게 한다.
				{
					System.out.print(double_operand[i] + " ");	// 입력된 실수 i번째 인덱스를 출력해준다.
				}
				System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
				
				switch(operator)	// 사용자에게 입력 받은 연산자에 따라 해당 case에 들어가게 한다.
				{
				case '+':	// 연산자가 + 일때 실행된다.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] + double_operand[1]));	// 사용자에게 입력받은 실수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '-':	// 연산자가 - 일때 실행된다.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] - double_operand[1]));	// 사용자에게 입력받은 실수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '*':	// 연산자가 * 일때 실행된다.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] * double_operand[1]));	// 사용자에게 입력받은 실수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '/':	// 연산자가 / 일때 실행된다.
					if(double_operand[1] == 0) {	// double_operand[1]가 0이면 print한다.
						System.out.println("\n0으로 나눌수 없습니다. 다시 처음부터 진행 주세요.\n");	// 0으로 나눌수 없음을 출력한다.
						continue;	// 처음부터 다시 하게 한다.
					}
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				case '%':	// 연산자가 % 일때 실행된다.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] % double_operand[1]));	// 사용자에게 입력받은 실수와 연산자를 출력해주고 계산 값을 출력해준다.
					System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
					break;	// 해당 case를 실행하고 switch문을 빠져나가게 한다.
				}
			}
			
			else	// 정수와 실수중 원하는 것을 선택할때 1 또는 2 가 아닌 다른것을 입력한 경우 실행된다.
			{
				System.out.println("다시 입력 하세요.");	// 설명을 위한 print문이다.
				continue;	// 잘못된 선택이 감지되어 처음부터 실행되게 하기 위한 continue 이다.
			}
			
			System.out.print("계속 하시겠습니까?(계속 / 종료)\n-> ");	// 프로그램을 계속 할지 정하게 하는 print문이다.
			con = sc.next();	// 사용자가 선택한 '계속' 또는 '종료' 를 String 형으로 저장한다.
			
			System.out.println();	// 결과창에 보기 편하게 하기 위한 줄바꿈이다.
			
			check = con.equals("종료");	// boolean형 check변수에 con 변수 안의 값과 '종료'를 비교하여 true 또는 false 값을 저장한다.
			
			if(check)	// true 또는 false 값으로 프로그램을 계속할지 정한다.
			{
				break;	// while문을 빠져나가게 한다.
			}
		}
		sc.close();	// 사용이 끝난 Scanner 를 닫아준다.
	}
}