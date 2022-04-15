// ���� ���α׷�
import java.util.Scanner;	// ����ڷκ��� �Է��� �ޱ� ���� Scanner class import

public class Calculator {	// Calculator class ����
	public static void main(String[] args) {	// ���α׷��� ���۵Ǵ� ���� �޼ҵ�
		Scanner sc = new Scanner(System.in);	// Scanner ��ü ����
		
		int choice;	// ����ڿ��� ������ �Ǽ��� � ������ ������� ���ϴ� �����̴�.
		double operand1, operand2;	// ����ڿ��� �Ǽ� ���� ���� �ޱ� ���� ���� �̴�.
		int[] int_operand = new int[2];	// ����ڿ��� ���� 2���� �޴� �迭�̴�.
		double[] double_operand = new double[2];	// ����ڿ��� �Ǽ� 2���� �޴� �迭�̴�.
		char operator;	// �����ڸ� �޴� ����
		boolean check;	// ���α׷��� �������� ������� ������ �� �ִ� boolean�� �����̴�.
		String con;	// ����ڿ��� '����' �� '���' ���� �ϳ��� �Է¹޾� �����ϴ� �����̴�.
		
		while(true)	// ���⸦ ��� ����ǰ� �ϴ� ���� ���� while��
		{
			System.out.print("1. ����\n2. �Ǽ�\n������ �����Ͻðڽ��ϱ�?: ");	// ����ڿ��� ������ �Ǽ��� ����� ���� ���ϰ� �ϴ� print���̴�.
			choice = sc.nextInt();	// ����ڿ��� �Է¹޴� 1 �Ǵ� 2�� ������ �����Ѵ�.
			
			if(choice == 1)	// choice�� 1�� ����Ǹ� �ش� if�� ����
			{
				System.out.print("\n������ ���� �������� �Է��ϼ���.\nA + B\n-> ");	// ���ϴ� ������ �Է��϶�� print���̴�.
				int_operand[0] = sc.nextInt();	// ����ڿ��� ù��° ������ �Է� �޾� �����ϴ� �����̴�.
				operator = sc.next().charAt(0);	// �����ڸ� �޾� �����Ѵ�.
				int_operand[1] = sc.nextInt();	// ����ڿ��� �ι�° ������ �Է� �޾� �����ϴ� �����̴�.
				
				System.out.print("�Էµ� ����: ");	// �Էµ� �� ������ �˷��ֱ� ���� print��
				
				for(int i = 0; i < 2; i++)	// i�� 0 �̰� i �� 2 ���� ���������� �ݺ��Ͽ� 2�� �ݺ��ϰ� �Ѵ�.
				{
					System.out.print(int_operand[i] + " ");	// �Էµ� ���� i��° �ε����� ������ش�.
				}
				
				System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
				
				switch(operator)	// ����ڿ��� �Է� ���� �����ڿ� ���� �ش� case�� ���� �Ѵ�.
				{
				case '+':	// �����ڰ� + �϶� ����ȴ�.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] + int_operand[1]));	// ����ڿ��� �Է¹��� ������ �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '-':	// �����ڰ� - �϶� ����ȴ�.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] - int_operand[1]));	// ����ڿ��� �Է¹��� ������ �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '*':	// �����ڰ� * �϶� ����ȴ�.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] * int_operand[1]));	// ����ڿ��� �Է¹��� ������ �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '/':	// �����ڰ� / �϶� ����ȴ�.
					try	// ���� ó���� ���� try-catch�� �����̴�.
					{
						System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] / int_operand[1]));	// ����ڿ��� �Է¹��� ������ �����ڸ� ������ְ� ��� ���� ������ش�.
						System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					}
					catch(ArithmeticException e)	// ������ �������� 0 ���� ������ ���ٴ� ������ ���� ó���Ѵ�.
					{
						System.out.println("\n0���� ������ �����ϴ�. ó������ �ٽ� �Է����ּ���.\n");	// ����ó�� �Ǿ����� �˷��ִ� print���̴�.
						continue;	// ���� ó�� �Ǿ� ó������ �ٽ� �Է��ϰ� �Ѵ�.
					}
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '%':	// �����ڰ� % �϶� ����ȴ�.
					System.out.println(int_operand[0] + " " + operator + " " + int_operand[1] + " = " + (int_operand[0] % int_operand[1]));	// ����ڿ��� �Է¹��� ������ �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				}
			}
			
			else if(choice == 2)	// choice�� 2�� ����Ǹ� �ش� if�� ����
			{
				System.out.print("\n������ ���� �������� �Է��ϼ���.\nA + B\n-> ");	// ���ϴ� ������ �Է��϶�� print���̴�.
				operand1 = sc.nextDouble();	// ����ڿ��� ù��° �Ǽ��� �Է� �޾� �����ϴ� �����̴�.
				operator = sc.next().charAt(0);	// �����ڸ� �޾� �����Ѵ�.
				operand2 = sc.nextDouble();	// ����ڿ��� �ι�° �Ǽ��� �Է� �޾� �����ϴ� �����̴�.
				
				double_operand[0] = operand1;	// operand1 �� ����ִ� �Ǽ��� double_operand[0]��° �ε����� �����Ѵ�.
				double_operand[1] = operand2;	// operand2 �� ����ִ� �Ǽ��� double_operand[1]��° �ε����� �����Ѵ�.
				
				System.out.print("�Էµ� �Ǽ�: ");	// �Էµ� �� ������ �˷��ֱ� ���� print��
				
				for(int i = 0; i < 2; i++)	// i�� 0 �̰� i �� 2 ���� ���������� �ݺ��Ͽ� 2�� �ݺ��ϰ� �Ѵ�.
				{
					System.out.print(double_operand[i] + " ");	// �Էµ� �Ǽ� i��° �ε����� ������ش�.
				}
				System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
				
				switch(operator)	// ����ڿ��� �Է� ���� �����ڿ� ���� �ش� case�� ���� �Ѵ�.
				{
				case '+':	// �����ڰ� + �϶� ����ȴ�.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] + double_operand[1]));	// ����ڿ��� �Է¹��� �Ǽ��� �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '-':	// �����ڰ� - �϶� ����ȴ�.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] - double_operand[1]));	// ����ڿ��� �Է¹��� �Ǽ��� �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '*':	// �����ڰ� * �϶� ����ȴ�.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] * double_operand[1]));	// ����ڿ��� �Է¹��� �Ǽ��� �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '/':	// �����ڰ� / �϶� ����ȴ�.
					if(double_operand[1] == 0) {	// double_operand[1]�� 0�̸� print�Ѵ�.
						System.out.println("\n0���� ������ �����ϴ�. �ٽ� ó������ ���� �ּ���.\n");	// 0���� ������ ������ ����Ѵ�.
						continue;	// ó������ �ٽ� �ϰ� �Ѵ�.
					}
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				case '%':	// �����ڰ� % �϶� ����ȴ�.
					System.out.println(double_operand[0] + " " + operator + " " + double_operand[1] + " = " + (double_operand[0] % double_operand[1]));	// ����ڿ��� �Է¹��� �Ǽ��� �����ڸ� ������ְ� ��� ���� ������ش�.
					System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
					break;	// �ش� case�� �����ϰ� switch���� ���������� �Ѵ�.
				}
			}
			
			else	// ������ �Ǽ��� ���ϴ� ���� �����Ҷ� 1 �Ǵ� 2 �� �ƴ� �ٸ����� �Է��� ��� ����ȴ�.
			{
				System.out.println("�ٽ� �Է� �ϼ���.");	// ������ ���� print���̴�.
				continue;	// �߸��� ������ �����Ǿ� ó������ ����ǰ� �ϱ� ���� continue �̴�.
			}
			
			System.out.print("��� �Ͻðڽ��ϱ�?(��� / ����)\n-> ");	// ���α׷��� ��� ���� ���ϰ� �ϴ� print���̴�.
			con = sc.next();	// ����ڰ� ������ '���' �Ǵ� '����' �� String ������ �����Ѵ�.
			
			System.out.println();	// ���â�� ���� ���ϰ� �ϱ� ���� �ٹٲ��̴�.
			
			check = con.equals("����");	// boolean�� check������ con ���� ���� ���� '����'�� ���Ͽ� true �Ǵ� false ���� �����Ѵ�.
			
			if(check)	// true �Ǵ� false ������ ���α׷��� ������� ���Ѵ�.
			{
				break;	// while���� ���������� �Ѵ�.
			}
		}
		sc.close();	// ����� ���� Scanner �� �ݾ��ش�.
	}
}