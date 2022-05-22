class Song {
	private String title; // �뷡������ �޴� ����
	private String artist; // �������� �޴� ����
	private String album; // �뷡�� ���� �ٹ� ������ �޴� ����
	private int year; // �뷡�� ��ǥ�� �⵵�� ��� ����

	public Song() {
	} // Song �⺻������

	public Song(String title, String artist, String album, int year) { // �Ű������� ���� �޾� Song Ŭ������ ���� �����ϴ� �޼ҵ�
		this.title = title; // title�� �޾ƿ� this �� ����Ͽ� Song class �� title ������ ���� ����
		this.artist = artist; // artist�� �޾ƿ� artist �� ����Ͽ� Song class �� artist ������ ���� ����
		this.album = album; // album�� �޾ƿ� album �� ����Ͽ� Song class �� album ������ ���� ����
		this.year = year; // year�� �޾ƿ� year �� ����Ͽ� Song class �� year ������ ���� ����
	}

	public void show() { // Song class �� ��� ���� ������ִ� �޼ҵ�
		System.out.println("�뷡 ����: " + title); // �뷡������ ���
		System.out.println("���� �̸�: " + artist); // �������� ���
		System.out.println("�ٹ� ����: " + album); // �뷡�� ���� �ٹ� ������ ���
		System.out.println("��ǥ �⵵: " + year); // �뷡�� ��ǥ�� �⵵�� ���
		System.out.println("-------------------------------------------"); // �� �뷡 ����Ʈ ���� ���� ���ϰ� �����ִ� �κ��� ���
	}
}

public class MySong { // main �޼ҵ带 ��� �ִ� Ŭ����
	public static void main(String[] args) {	// ���� �޼ҵ�
		Song[] song = new Song[3]; // 3���� �뷡�� �����ϱ� ���� Song �迭�� ���� ���۷��� ���� song ����

		song[0] = new Song("�����Է��� �ʴ�", "����ȭ", "My Blue Dreams", 2014); // 0��° �ε����� �����ڷ� �뷡 ���� ���� �ѱ��.
		song[1] = new Song("pet", "10cm", "4.0", 2017); // 1��° �ε����� �����ڷ� �뷡 ���� ���� �ѱ��.
		song[2] = new Song("���޷���", "����", "Good Day and Good Bye", 2003); // 2��° �ε����� �����ڷ� �뷡 ���� ���� �ѱ��.

		System.out.println("----------------���� �뷡 ����Ʈ----------------"); // �ش� ���� ���

		song[0].show(); // song �迭 0��° �ε����� ������ ���� ���� show �޼ҵ� ȣ��
		song[1].show(); // song �迭 1��° �ε����� ������ ���� ���� show �޼ҵ� ȣ��
		song[2].show(); // song �迭 2��° �ε����� ������ ���� ���� show �޼ҵ� ȣ��
	}
}
