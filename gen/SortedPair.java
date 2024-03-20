public class SortedPair<T extends Comparable<T>> {
	private T firstItem;
	private T secondItem;

	public SortedPair(T f, T s) {
		if (s.compareTo(f) < 0) {
			firstItem = s;
			secondItem = f;
			return;
		}

		firstItem = f;
		secondItem = s;
	}

	public T first() {
		return firstItem;
	}

	public T second() {
		return secondItem;
	}

	public void setFirst(T item) {
		if (item.compareTo(secondItem) <= 0) {
			firstItem = item;
		} else {
			firstItem = secondItem;
			secondItem = item;
		}
	}

	public void setSecond(T item) {
		if (item.compareTo(firstItem) >= 0) {
			secondItem = item;
		} else {
			secondItem = firstItem;
			firstItem = item;
		}
	}

	public String toString() {
		return "(" + firstItem + ", " + secondItem + ")";
	}

	public static void main(String[] args) {
		SortedPair<Integer> p1 = new SortedPair<>(3, 9);
		System.out.println(p1);

		p1.setFirst(2);
		System.out.println(p1);
		p1.setSecond(0);
		System.out.println(p1);

		SortedPair<Integer> p2 = new SortedPair<>(3, -9);
		System.out.println(p2);
	}
}
