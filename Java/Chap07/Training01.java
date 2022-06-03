import java.util.*;

public class Training01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Vector<Double> v = new Vector<Double>();

		for (int i = 0; i < 5; i++) {
			v.add(Double.valueOf(sc.next()));
		}
		double max = v.get(0);
		
		for(int i = 1; i < v.size(); i++) {
			if(max < v.get(i)) {
				max = v.get(i);
			}
		}
		System.out.println("가장 큰 수는 " + max);
		
		sc.close();
	}

}
