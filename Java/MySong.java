class Song {
	private String title; // 노래제목을 받는 변수
	private String artist; // 가수명을 받는 변수
	private String album; // 노래가 속한 앨범 제목을 받는 변수
	private int year; // 노래가 발표된 년도를 담는 변수

	public Song() {
	} // Song 기본생성자

	public Song(String title, String artist, String album, int year) { // 매개변수로 값을 받아 Song 클래스에 값을 저장하는 메소드
		this.title = title; // title을 받아와 this 를 사용하여 Song class 의 title 변수에 값을 대입
		this.artist = artist; // artist을 받아와 artist 를 사용하여 Song class 의 artist 변수에 값을 대입
		this.album = album; // album을 받아와 album 를 사용하여 Song class 의 album 변수에 값을 대입
		this.year = year; // year을 받아와 year 를 사용하여 Song class 의 year 변수에 값을 대입
	}

	public void show() { // Song class 의 모든 값을 출력해주는 메소드
		System.out.println("노래 제목: " + title); // 노래제목을 출력
		System.out.println("가수 이름: " + artist); // 가수명을 출력
		System.out.println("앨범 제목: " + album); // 노래가 속한 앨범 제목을 출력
		System.out.println("발표 년도: " + year); // 노래가 발표된 년도를 출력
		System.out.println("-------------------------------------------"); // 각 노래 리스트 마다 보기 편하게 나눠주는 부분을 출력
	}
}

public class MySong { // main 메소드를 담고 있는 클래스
	public static void main(String[] args) {	// 메인 메소드
		Song[] song = new Song[3]; // 3개의 노래를 저장하기 위한 Song 배열에 대한 레퍼런스 변수 song 선언

		song[0] = new Song("나에게로의 초대", "정경화", "My Blue Dreams", 2014); // 0번째 인덱스에 생성자로 노래 정보 값을 넘긴다.
		song[1] = new Song("pet", "10cm", "4.0", 2017); // 1번째 인덱스에 생성자로 노래 정보 값을 넘긴다.
		song[2] = new Song("진달래꽃", "마야", "Good Day and Good Bye", 2003); // 2번째 인덱스에 생성자로 노래 정보 값을 넘긴다.

		System.out.println("----------------나의 노래 리스트----------------"); // 해당 문구 출력

		song[0].show(); // song 배열 0번째 인덱스의 위에서 값을 받은 show 메소드 호출
		song[1].show(); // song 배열 1번째 인덱스의 위에서 값을 받은 show 메소드 호출
		song[2].show(); // song 배열 2번째 인덱스의 위에서 값을 받은 show 메소드 호출
	}
}
