public class Pair<T> {
	private T firstItem;
	private T secondItem;

	public Pair(T f, T s) {
		firstItem = f;
		secondItem = s;
	}

	public T first() {
		return firstItem;
	}

	public T second() {
		return secondItem;
	}

	public void swap() {
		T temp = firstItem;
		firstItem = secondItem;
		secondItem = temp;
	}

	public String toString() {
		return "(" + firstItem + ", " + secondItem + ")";
	}

	public static void main(String[] args) {
		Pair<Integer> p1 = new Pair<>(3, 9);
		System.out.println(p1);
		p1.swap();
		System.out.println(p1);

		Pair<String> p2 = new Pair<>("hello", "world");
		System.out.println(p2);
		p2.swap();
		System.out.println(p2);

		// Pair<String> p3 = new Pair<>("hello", 8);
		// System.out.println(p3);
		// p3.swap();
		// System.out.println(p3);

// 		String first = p3.first();
// 		System.out.println(first);
	}
}
