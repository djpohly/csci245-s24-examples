public class Pair2<F, S> {
	private F firstItem;
	private S secondItem;

	public Pair2(F f, S s) {
		firstItem = f;
		secondItem = s;
	}

	public F first() {
		return firstItem;
	}

	public S second() {
		return secondItem;
	}

	public Pair2<S,F> swap() {
		return new Pair2<S,F>(secondItem, firstItem);
	}

	public String toString() {
		return "(" + firstItem + ", " + secondItem + ")";
	}

	public static void main(String[] args) {
		Pair2<Integer, Integer> p1 = new Pair2<>(3, 9);
		System.out.println(p1);
		p1 = p1.swap();
		System.out.println(p1);

		Pair2<String, String> p2 = new Pair2<>("hello", "world");
		System.out.println(p2);
		p2 = p2.swap();
		System.out.println(p2);

		Pair2<String, Integer> p3 = new Pair2<>("hello", 8);
		System.out.println(p3);
		Pair2<Integer, String> p4 = p3.swap();
		System.out.println(p4);

		String first = p3.first();
		System.out.println(first);
	}
}
