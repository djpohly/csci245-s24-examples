import java.util.ArrayList;

public class LList<T> {
	private class Node {
		private T item;
		private Node next;

		public Node(T item, Node next) {
			this.item = item;
			this.next = next;
		}

		public Node(T item) {
			this(item, null);
		}
	}

	private Node head;

	public LList() {
		head = null;
	}

	public void addFirst(T item) {
		head = new Node(item, head);
	}

	public void addLast(T item) {
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

	public void addAll(Iterable<? extends T> stuff) {
		Node current = null;
		if (head == null) {
			for (T item : stuff) {
				if (head == null) {
					head = new Node(item);
					current = head;
				} else {
					current.next = new Node(item);
					current = current.next;
				}
			}
			return;
		}

		for (current = head;
			current.next != null;
			current = current.next)
			;
		// current is now the last node

		for (T thing : stuff) {
			current.next = new Node(thing);
			current = current.next;
		}
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
		LList<Object> list = new LList<>();

		System.out.println(list);
		list.addLast(1);
		System.out.println(list);
		list.addFirst(2);
		System.out.println(list);
		list.addLast(3);
		System.out.println(list);

		ArrayList<Integer> al = new ArrayList<>();
		al.add(4);
		al.add(5);
		al.add(6);
		al.add(7);
		al.add(8);
		al.add(9);
		al.add(10);
		al.add(11);
		al.add(12);
		al.add(13);
		al.add(14);
		al.add(15);
		al.add(16);
		al.add(17);
		al.add(18);
		al.add(19);
		al.add(20);
		al.add(21);
		al.add(22);
		al.add(23);
		al.add(24);

		list.addAll(al);
		System.out.println(list);
	}
}
