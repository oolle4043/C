import java.util.Scanner; // ����ڿ��� �Է¹ޱ� ���� Scanner import

class Product {
	private int id; // ��ǰ �����ĺ��ڸ� �޴� ����
	private String kind; // ��ǰ�� ������ �޴� ����
	private String produce; // �����ü�� �޴� ����
	private int price; // ������ �޴� ����

	public Product() { // Product�� �⺻ ������
	}

	public Product(int id, String kind, String produce, int price) { // ���� �ʱ�ȭ ���ִ� ������
		this.id = id; // id�� �޾ƿ� this �� ����Ͽ� Product class �� id ������ ���� ����
		this.kind = kind; // id�� �޾ƿ� this �� ����Ͽ� Product class �� id ������ ���� ����
		this.produce = produce; // id�� �޾ƿ� this �� ����Ͽ� Product class �� id ������ ���� ����
		this.price = price; // id�� �޾ƿ� this �� ����Ͽ� Product class �� id ������ ���� ����
	}

	public void show() { // ���� ���� ���� ������ִ� �޼ҵ�
		System.out.println("��ǰ ID: " + id); // id�� ���
		System.out.println("��ǰ ����: " + kind); // kind�� ���
		System.out.println("�����ü: " + produce); // produce�� ���
		System.out.println("����: " + price); // price�� ���
	}
}

class Book extends Product { // Product class �� ��� �޴� Book class
	private String ISBN; // ISBN�� �޴� ����
	private String author; // ���ڸ��� �޴� ����
	private String bookName; // å ������ �޴� ����

	public Book() { // Book�� �⺻ ������
	}

	public Book(int id, String kind, String produce, int price, String ISBN, String author, String bookName) { // ���� �ʱ�ȭ
																												// ���ִ�
																												// ������
		super(id, kind, produce, price); // super �޼ҵ�� �θ� ������ ȣ��
		this.ISBN = ISBN; // ISBN�� �޾ƿ� this �� ����Ͽ� Product class �� ISBN ������ ���� ����
		this.author = author; // author�� �޾ƿ� this �� ����Ͽ� Product class �� author ������ ���� ����
		this.bookName = bookName; // bookName�� �޾ƿ� this �� ����Ͽ� Product class �� bookName ������ ���� ����
	}

	public void show() { // ���� ���� ���� ������ִ� �޼ҵ�
		super.show(); // ���� Ŭ������ show �޼ҵ带 ȣ��
		System.out.println("ISBN(��ȣ): " + ISBN); // ISBN�� ���
		System.out.println("���ڸ�: " + author); // author�� ���
		System.out.println("å ����: " + bookName); // bookName�� ���
	}
}

class CompactDisc extends Product { // Product class �� ��� �޴� CompactDisc class
	private String title; // �ٹ� ������ �޴� ����
	private String artist; // ���� �̸��� �޴� ����

	public CompactDisc() { // CompactDisc�� �⺻ ������
	}

	public CompactDisc(int id, String kind, String produce, int price, String title, String artist) { // ���� �ʱ�ȭ ���ִ� ������
		super(id, kind, produce, price); // super �޼ҵ�� �θ� ������ ȣ��
		this.title = title; // title�� �޾ƿ� this �� ����Ͽ� Product class �� title ������ ���� ����
		this.artist = artist; // artist�� �޾ƿ� this �� ����Ͽ� Product class �� artist ������ ���� ����
	}

	public void show() { // ���� ���� ���� ������ִ� �޼ҵ�
		super.show(); // ���� Ŭ������ show �޼ҵ带 ȣ��
		System.out.println("�ٹ� ����: " + title); // title�� ���
		System.out.println("����: " + artist); // artist�� ���
	}
}

class Magazine extends Book { // Book class �� ��� �޴� Magazine class
	private int year; // �߰��⵵�� �޴� ����
	private int round; // ȸ���� �޴� ����

	public Magazine() { // Magazine�� �⺻ ������
	}

	public Magazine(int id, String kind, String produce, int price, String ISBN, String author, String bookName,
			int year, int round) { // ���� �ʱ�ȭ ���ִ� ������
		super(id, kind, produce, price, ISBN, author, bookName); // super �޼ҵ�� �θ� ������ ȣ��
		this.year = year; // year�� �޾ƿ� this �� ����Ͽ� Book class �� year ������ ���� ����
		this.round = round; // round�� �޾ƿ� this �� ����Ͽ� Book class �� round ������ ���� ����
	}

	public void show() { // ���� ���� ���� ������ִ� �޼ҵ�
		super.show(); // ���� Ŭ������ show �޼ҵ带 ȣ��
		System.out.println("�߰��⵵: " + year); // year�� ���
		System.out.println("ȸ��: " + round); // round�� ���
	}
}

public class ProductInfoTest { // main �޼ҵ带 ������ Ŭ����
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // ����ڿ��� �Է��� �ޱ� ���� Scanner ��ü ����

		int choice, select, max = 0; // ��ǰ�� �߰� ���� ��ȸ���� ���α׷��� ���������� �����ϴ� choice������ ��ǰ�� ������ �����ϴ� select���� �׸��� �迭�� ũ�⸸ŭ�� ���� �ϱ� ���� max ������ ����
		int id, price; // ��ǰ �����ĺ����� ���� ���� ������ �Է¹��� ���� ����
		
		String produce, kind;// Product Ŭ������ �ʵ�
		String ISBN, author, bookName; // Book Ŭ������ �ʵ�
		String title, artist; // CompactDisc Ŭ������ �ʵ�
		int year, round; // Magazine Ŭ������ �ʵ�

		Product[] p = new Product[10]; // Product �迭�� ���� ���۷��� p�� �����԰� ���ÿ� ũ�Ⱑ 10�� ���۷��� �迭 ����

		while (true) { // ���ѹݺ��Ǵ� while �ݺ���
			System.out.print("��ǰ�߰�(1), ��� ��ǰ ��ȸ(2), ������(3)>> "); // �޴�����
			choice = sc.nextInt(); // ����ڿ��� ������ �Է¹���

			if (choice == 1) { // ��ǰ �߰�(1) ����
				System.out.print("��ǰ ����: å(1), ���� CD(2), ����(3)>> "); // ���� ����
				select = sc.nextInt(); // ����ڿ��� ������ �Է¹���

				sc.nextLine(); // ���۸� ���� ���� sc.nextLine()

				switch (select) { // ��ǰ ������ � ������ �Ͽ����� �Ǻ��ϱ� ���� switch
				case 1: // select == 1 �϶�
					System.out.print("�����ü >> "); // �����ü�� �Է� �ޱ� ���� ���� ���
					produce = sc.nextLine(); // produce�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("���� >> "); // ������ �Է� �ޱ� ���� ���� ���
					price = sc.nextInt(); // price�� �Է¹ޱ� ���� sc.nextInt()

					sc.nextLine(); // ���۸� ���� ���� sc.nextLine()

					System.out.print("ISBN >> "); // ISBN�� �Է� �ޱ� ���� ���� ���
					ISBN = sc.nextLine(); // ISBN�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("���ڸ� >> "); // ���ڸ��� �Է� �ޱ� ���� ���� ���
					author = sc.nextLine(); // author�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("å ���� >> "); // å ������ �Է� �ޱ� ���� ���� ���
					bookName = sc.nextLine(); // bookName�� �Է¹ޱ� ���� sc.nextLine()

					p[max] = new Book(max, "å", produce, price, ISBN, author, bookName); //p[max]��° �ε����� ����ڷκ��� �Է¹��� ������ �ʱ�ȭ�� Book ��ü ����
					max++; // max �� ����
					break; //switch ���� ���������� ���� break

				case 2: // select == 2 �϶�
					System.out.print("�����ü >> "); // �����ü�� �Է� �ޱ� ���� ���� ���
					produce = sc.nextLine(); // produce�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("���� >> "); // ������ �Է� �ޱ� ���� ���� ���
					price = sc.nextInt(); // price�� �Է¹ޱ� ���� sc.nextInt()

					sc.nextLine(); // ���۸� ���� ���� sc.nextLine()

					System.out.print("�ٹ� ���� >> "); // �ٹ� ������ �Է� �ޱ� ���� ���� ���
					title = sc.nextLine(); // title�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("���� >> "); // ������ �Է� �ޱ� ���� ���� ���
					artist = sc.nextLine(); // artist�� �Է¹ޱ� ���� sc.nextLine()

					p[max] = new CompactDisc(max, "���� CD", produce, price, title, artist); //p[max]��° �ε����� ����ڷκ��� �Է¹��� ������ �ʱ�ȭ�� CompactDisc ��ü ����
					max++; // max �� ����
					break; // switch ���� ���������� ���� break

				case 3: // select == 3 �϶�
					System.out.print("�����ü >> "); // �����ü�� �Է� �ޱ� ���� ���� ���
					produce = sc.nextLine(); // produce�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("���� >> "); // ������ �Է� �ޱ� ���� ���� ���
					price = sc.nextInt(); // price�� �Է¹ޱ� ���� sc.nextInt()

					sc.nextLine(); // ���۸� ���� ���� sc.nextLine()

					System.out.print("ISBN >> "); // ISBN�� �Է� �ޱ� ���� ���� ���
					title = sc.nextLine(); // title�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("���ڸ� >> "); // ���ڸ��� �Է� �ޱ� ���� ���� ���
					author = sc.nextLine(); // author�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("å ���� >> "); // å ������ �Է� �ޱ� ���� ���� ���
					bookName = sc.nextLine(); // bookName�� �Է¹ޱ� ���� sc.nextLine()

					System.out.print("�߰����� >> "); // �߰������� �Է� �ޱ� ���� ���� ���
					year = sc.nextInt(); // year�� �Է¹ޱ� ���� sc.nextInt()

					System.out.print("ȸ�� >> "); // ȸ���� �Է� �ޱ� ���� ���� ���
					round = sc.nextInt(); // round�� �Է¹ޱ� ���� sc.nextInt()

					sc.nextLine(); // ���۸� ���� ���� sc.nextLine()
					
					p[max] = new Magazine(max, "����", produce, price, title, author, bookName, year, round); //p[max]��° �ε����� ����ڷκ��� �Է¹��� ������ �ʱ�ȭ�� Magazine ��ü ����
					max++;	// max �� ����
					break; // switch ���� ���������� ���� break
				}

			} else if (choice == 2) { // ��� ��ǰ ��ȸ(2) ����
				if (max == 0) { // ���� max�� 0�϶�
					System.out.println("����� ���� �����ϴ�."); // �ش� ���� ���
					continue; // while���� ó������
				}
				for (int i = 0; i < max; i++) { // i�� 0���� max���� �ݺ��ϴ� for��
					System.out.println("----------------------"); // ���� ���ϰ� �ϱ� ���� ���� ���
					p[i].show(); // p[i] ��ü�� show() �޼ҵ� ȣ��
					System.out.println("----------------------"); // ���� ���ϰ� �ϱ� ���� ���� ���
				}
			} else if (choice == 3) { // ������(3) ����
				System.out.println("����"); // ���� ���� ���
				break; // while�� ����
			} else { // �̿� �� �Է½�
				System.out.println("�߸��� �����Դϴ�."); // �ش� ���� ���
			}

		}
		sc.close(); // Scanner class �� ��ü sc ����
	}
}