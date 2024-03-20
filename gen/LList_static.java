public class LList<T> {
	private static class Node<N> {
		private N item;
		private Node<N> next;

		public Node(N item, Node<N> next) {
			this.item = item;
			this.next = next;
		}

		public Node(N item) {
			this(item, null);
		}
	}

	private Node<T> head;

	public LList() {
		head = null;
	}

	public void addFirst(T item) {
		head = new Node<T>(item, head);
	}

	public void addLast(T item) {
		if (head == null) {
			addFirst(item);
			return;
		}
		Node<T> current;
		for (current = head;
			current.next != null;
			current = current.next)
			;
		current.next = new Node<T>(item);
	}

	public String toString() {
		String output = "";
		for (Node<T> current = this.head;
				current != null;
				current = current.next) {

			if (!output.equals("")) {
				output += ",";
			}
			output += current.item;
		}
		return "[" + output + "]";
	}

	public static void main(String[] args) {
		LList<Integer> list = new LList<>();

		System.out.println(list);
		list.addLast(1);
		System.out.println(list);
		list.addFirst(2);
		System.out.println(list);
		list.addLast(3);
		System.out.println(list);
		list.addFirst(4);
		list.addFirst(5);
		list.addFirst(6);
		list.addFirst(7);
		list.addFirst(8);
		list.addFirst(9);
		list.addFirst(10);
		list.addFirst(11);
		list.addFirst(12);
		list.addFirst(13);
		list.addFirst(14);
		list.addFirst(15);
		list.addFirst(16);
		list.addFirst(17);
		list.addFirst(18);
		list.addFirst(19);
		list.addFirst(20);
		list.addFirst(21);
		list.addFirst(22);
		list.addFirst(23);
		list.addFirst(24);
		System.out.println(list);
	}
}
