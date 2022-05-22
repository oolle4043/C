import java.util.Scanner; // 사용자에게 입력받기 위해 Scanner import

class Product {
	private int id; // 상품 고유식별자를 받는 변수
	private String kind; // 상품의 종류를 받는 변수
	private String produce; // 생산업체를 받는 변수
	private int price; // 가격을 받는 변수

	public Product() { // Product의 기본 생성자
	}

	public Product(int id, String kind, String produce, int price) { // 값을 초기화 해주는 생성자
		this.id = id; // id을 받아와 this 를 사용하여 Product class 의 id 변수에 값을 대입
		this.kind = kind; // id을 받아와 this 를 사용하여 Product class 의 id 변수에 값을 대입
		this.produce = produce; // id을 받아와 this 를 사용하여 Product class 의 id 변수에 값을 대입
		this.price = price; // id을 받아와 this 를 사용하여 Product class 의 id 변수에 값을 대입
	}

	public void show() { // 받은 값을 각각 출력해주는 메소드
		System.out.println("상품 ID: " + id); // id를 출력
		System.out.println("상품 종류: " + kind); // kind를 출력
		System.out.println("생산업체: " + produce); // produce를 출력
		System.out.println("가격: " + price); // price를 출력
	}
}

class Book extends Product { // Product class 를 상속 받는 Book class
	private String ISBN; // ISBN을 받는 변수
	private String author; // 저자명을 받는 변수
	private String bookName; // 책 제목을 받는 변수

	public Book() { // Book의 기본 생성자
	}

	public Book(int id, String kind, String produce, int price, String ISBN, String author, String bookName) { // 값을 초기화
																												// 해주는
																												// 생성자
		super(id, kind, produce, price); // super 메소드로 부모에 생성자 호출
		this.ISBN = ISBN; // ISBN을 받아와 this 를 사용하여 Product class 의 ISBN 변수에 값을 대입
		this.author = author; // author을 받아와 this 를 사용하여 Product class 의 author 변수에 값을 대입
		this.bookName = bookName; // bookName을 받아와 this 를 사용하여 Product class 의 bookName 변수에 값을 대입
	}

	public void show() { // 받은 값을 각각 출력해주는 메소드
		super.show(); // 슈퍼 클래스의 show 메소드를 호출
		System.out.println("ISBN(번호): " + ISBN); // ISBN을 출력
		System.out.println("저자명: " + author); // author를 출력
		System.out.println("책 제목: " + bookName); // bookName을 출력
	}
}

class CompactDisc extends Product { // Product class 를 상속 받는 CompactDisc class
	private String title; // 앨범 제목을 받는 변수
	private String artist; // 가수 이름을 받는 변수

	public CompactDisc() { // CompactDisc의 기본 생성자
	}

	public CompactDisc(int id, String kind, String produce, int price, String title, String artist) { // 값을 초기화 해주는 생성자
		super(id, kind, produce, price); // super 메소드로 부모에 생성자 호출
		this.title = title; // title을 받아와 this 를 사용하여 Product class 의 title 변수에 값을 대입
		this.artist = artist; // artist을 받아와 this 를 사용하여 Product class 의 artist 변수에 값을 대입
	}

	public void show() { // 받은 값을 각각 출력해주는 메소드
		super.show(); // 슈퍼 클래스의 show 메소드를 호출
		System.out.println("앨범 제목: " + title); // title을 출력
		System.out.println("가수: " + artist); // artist를 출력
	}
}

class Magazine extends Book { // Book class 를 상속 받는 Magazine class
	private int year; // 발간년도를 받는 변수
	private int round; // 회차를 받는 변수

	public Magazine() { // Magazine의 기본 생성자
	}

	public Magazine(int id, String kind, String produce, int price, String ISBN, String author, String bookName,
			int year, int round) { // 값을 초기화 해주는 생성자
		super(id, kind, produce, price, ISBN, author, bookName); // super 메소드로 부모에 생성자 호출
		this.year = year; // year을 받아와 this 를 사용하여 Book class 의 year 변수에 값을 대입
		this.round = round; // round을 받아와 this 를 사용하여 Book class 의 round 변수에 값을 대입
	}

	public void show() { // 받은 값을 각각 출력해주는 메소드
		super.show(); // 슈퍼 클래스의 show 메소드를 호출
		System.out.println("발간년도: " + year); // year를 출력
		System.out.println("회차: " + round); // round를 출력
	}
}

public class ProductInfoTest { // main 메소드를 포함한 클래스
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // 사용자에게 입력을 받기 위한 Scanner 객체 생성

		int choice, select, max = 0; // 상품을 추가 할지 조회할지 프로그램을 종료할지를 선택하는 choice변수와 상품의 종류를 선택하는 select변수 그리고 배열의 크기만큼만 돌게 하기 위한 max 변수를 선언
		int id, price; // 상품 고유식별자의 값과 가격 정보를 입력받을 변수 선언
		
		String produce, kind;// Product 클래스의 필드
		String ISBN, author, bookName; // Book 클래스의 필드
		String title, artist; // CompactDisc 클래스의 필드
		int year, round; // Magazine 클래스의 필드

		Product[] p = new Product[10]; // Product 배열에 대한 레퍼런스 p를 선언함과 동시에 크기가 10인 레퍼런스 배열 생성

		while (true) { // 무한반복되는 while 반복문
			System.out.print("상품추가(1), 모든 상품 조회(2), 끝내기(3)>> "); // 메뉴선택
			choice = sc.nextInt(); // 사용자에게 선택을 입력받음

			if (choice == 1) { // 상품 추가(1) 선택
				System.out.print("상품 종류: 책(1), 음악 CD(2), 잡지(3)>> "); // 종류 선택
				select = sc.nextInt(); // 사용자에게 선택을 입력받음

				sc.nextLine(); // 버퍼를 비우기 위한 sc.nextLine()

				switch (select) { // 상품 종류중 어떤 선택을 하였는지 판별하기 위한 switch
				case 1: // select == 1 일때
					System.out.print("생산업체 >> "); // 생산업체를 입력 받기 위한 문구 출력
					produce = sc.nextLine(); // produce를 입력받기 위한 sc.nextLine()

					System.out.print("가격 >> "); // 가격을 입력 받기 위한 문구 출력
					price = sc.nextInt(); // price를 입력받기 위한 sc.nextInt()

					sc.nextLine(); // 버퍼를 비우기 위한 sc.nextLine()

					System.out.print("ISBN >> "); // ISBN을 입력 받기 위한 문구 출력
					ISBN = sc.nextLine(); // ISBN를 입력받기 위한 sc.nextLine()

					System.out.print("저자명 >> "); // 저자명을 입력 받기 위한 문구 출력
					author = sc.nextLine(); // author를 입력받기 위한 sc.nextLine()

					System.out.print("책 제목 >> "); // 책 제목을 입력 받기 위한 문구 출력
					bookName = sc.nextLine(); // bookName를 입력받기 위한 sc.nextLine()

					p[max] = new Book(max, "책", produce, price, ISBN, author, bookName); //p[max]번째 인덱스에 사용자로부터 입력받은 값으로 초기화된 Book 객체 생성
					max++; // max 값 증가
					break; //switch 문을 빠져나가기 위한 break

				case 2: // select == 2 일때
					System.out.print("생산업체 >> "); // 생산업체를 입력 받기 위한 문구 출력
					produce = sc.nextLine(); // produce를 입력받기 위한 sc.nextLine()

					System.out.print("가격 >> "); // 가격을 입력 받기 위한 문구 출력
					price = sc.nextInt(); // price를 입력받기 위한 sc.nextInt()

					sc.nextLine(); // 버퍼를 비우기 위한 sc.nextLine()

					System.out.print("앨범 제목 >> "); // 앨범 제목을 입력 받기 위한 문구 출력
					title = sc.nextLine(); // title를 입력받기 위한 sc.nextLine()

					System.out.print("가수 >> "); // 가수를 입력 받기 위한 문구 출력
					artist = sc.nextLine(); // artist를 입력받기 위한 sc.nextLine()

					p[max] = new CompactDisc(max, "음악 CD", produce, price, title, artist); //p[max]번째 인덱스에 사용자로부터 입력받은 값으로 초기화된 CompactDisc 객체 생성
					max++; // max 값 증가
					break; // switch 문을 빠져나가기 위한 break

				case 3: // select == 3 일때
					System.out.print("생산업체 >> "); // 생산업체를 입력 받기 위한 문구 출력
					produce = sc.nextLine(); // produce를 입력받기 위한 sc.nextLine()

					System.out.print("가격 >> "); // 가격을 입력 받기 위한 문구 출력
					price = sc.nextInt(); // price를 입력받기 위한 sc.nextInt()

					sc.nextLine(); // 버퍼를 비우기 위한 sc.nextLine()

					System.out.print("ISBN >> "); // ISBN을 입력 받기 위한 문구 출력
					title = sc.nextLine(); // title를 입력받기 위한 sc.nextLine()

					System.out.print("저자명 >> "); // 저자명을 입력 받기 위한 문구 출력
					author = sc.nextLine(); // author를 입력받기 위한 sc.nextLine()

					System.out.print("책 제목 >> "); // 책 제목을 입력 받기 위한 문구 출력
					bookName = sc.nextLine(); // bookName를 입력받기 위한 sc.nextLine()

					System.out.print("발간연도 >> "); // 발간연도를 입력 받기 위한 문구 출력
					year = sc.nextInt(); // year를 입력받기 위한 sc.nextInt()

					System.out.print("회차 >> "); // 회차를 입력 받기 위한 문구 출력
					round = sc.nextInt(); // round를 입력받기 위한 sc.nextInt()

					sc.nextLine(); // 버퍼를 비우기 위한 sc.nextLine()
					
					p[max] = new Magazine(max, "잡지", produce, price, title, author, bookName, year, round); //p[max]번째 인덱스에 사용자로부터 입력받은 값으로 초기화된 Magazine 객체 생성
					max++;	// max 값 증가
					break; // switch 문을 빠져나가기 위한 break
				}

			} else if (choice == 2) { // 모든 상품 조회(2) 선택
				if (max == 0) { // 만약 max가 0일때
					System.out.println("저장된 값이 없습니다."); // 해당 문구 출력
					continue; // while문의 처음으로
				}
				for (int i = 0; i < max; i++) { // i를 0부터 max까지 반복하는 for문
					System.out.println("----------------------"); // 보기 편하게 하기 위한 문구 출력
					p[i].show(); // p[i] 객체의 show() 메소드 호출
					System.out.println("----------------------"); // 보기 편하게 하기 위한 문구 출력
				}
			} else if (choice == 3) { // 끝내기(3) 선택
				System.out.println("종료"); // 종료 문구 출력
				break; // while문 종료
			} else { // 이외 값 입력시
				System.out.println("잘못된 선택입니다."); // 해당 문구 출력
			}

		}
		sc.close(); // Scanner class 의 객체 sc 종료
	}
}