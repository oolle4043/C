import java.util.*;

public class VectorEx {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Vector<Integer> v = new Vector<Integer>();

		System.out.println("2000 ~ 2009년까지 1년 단위로 키(cm)를 입력");

		for (int i = 0; i < 10; i++) {
			v.add(Integer.valueOf(sc.next()));
		}

		double max = 0;
		int year = 0;
		for (int i = 0; i < v.size() - 1; i++) {
			int temp = v.get(i + 1) - v.get(i);
			if (temp > max) {
				max = temp;
				year = i;
			}
		}
		year += 2000;
		System.out.println("가장 키가 많이 자란 년도는 " + year + "년 " + max + "cm");

		sc.close();
	}
}