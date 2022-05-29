
public class RandomEx {
	public static void main(String[] args) {
		int[] temp = new int[3];
		int count = 0;

		while (true) {
			for (int i = 0; i < temp.length; i++) {
				temp[i] = (int) (Math.random() * 3 + 1);
			}
			for (int i = 0; i < temp.length; i++) {

				System.out.print(temp[i] + "\t");
			}
			count += 1;
			System.out.println();
			
			if (temp[0] == temp[1] && temp[0] == temp[2]) {
				System.out.println("총 " + count + "번 시도하였습니다.");
				break;
			}
		}
	}
}
