import java.util.*;

public class Training05 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashMap<String, Integer> h = new HashMap<String, Integer>();

		System.out.println("나라 이름과 인구를 5개 입력하세요.(예: Korea 5000");

		for (int i = 0; i < 5; i++) {
			System.out.print("나라 이름, 인구 >> ");
			h.put(sc.next(), sc.nextInt());
		}

		Set<String> keys = h.keySet();
		Iterator<String> it = keys.iterator();

		String country = null;
		int population = 0;

		while (it.hasNext()) {
			String key = it.next();
			int value = h.get(key);
			if (population < value) {
				country = key;
				population = value;
			}
		}

		System.out.println("제일 인구가 많은 나라는 (" + country + ", " + population + ")");

		sc.close();
	}
}