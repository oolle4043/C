import java.util.*;

public class Training08 {
	public static Vector<String> hashToVector(HashMap<String, String> h) {
		Vector<String> v = new Vector<String>();

		Set<String> s = h.keySet();
		Iterator<String> it = s.iterator();
		
		while (it.hasNext()) {
			String key = it.next();
			v.add(h.get(key));
		}
		return v;
	}

	public static void main(String[] args) {
		HashMap<String, String> h = new HashMap<String, String>();

		h.put("범죄", "112");
		h.put("화재", "119");
		h.put("전화번호", "114");

		Vector<String> v = hashToVector(h);

		for (int n = 0; n < v.size(); n++) {
			System.out.print(v.get(n) + " ");
		}
	}
}
