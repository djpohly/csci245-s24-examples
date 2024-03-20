public class AltLList<E, O> {
	private static class Node<T, N> {
		private T item;
		private Node<N> next;

		public Node(T item, Node<N> next) {
			this.item = item;
			this.next = next;
		}

		public Node(T item) {
			this(item, null);
		}
	}

	private Node<E, O> head;

	public AltLList() {
		head = null;
	}

	public void addLast2(T item) {
		if (head == null) {
			addFirst(item);
			return;
		}
		Node current;
		for (current = head;
			current.next != null;
			current = current.next)
			;
		current.next = new Node(item);
	}

	public String toString() {
		String output = "";
		for (Node current = this.head;
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
		AltLList<Integer> list = new AltLList<>();

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
