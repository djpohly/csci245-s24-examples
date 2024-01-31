public class LList {
	private LNode head;

	public LList() {
		this.head = null;
	}

	public void addFirst(int item) {
		head = new LNode(head, item);
	}

	public int removeFirst() {
		int ret = head.getDatum();
		head = head.getNext();
		return ret;
	}

	public void addLast(int item) {
		if (head == null) {
			addFirst(item);
			return;
		}
		head.addLast(item);
	}

	// public void addLast(int item) {
	// 	if (this.head == null) {
	// 		addFirst(item);
	// 		return;
	// 	}

	// 	// We know head != null
	// 	LNode current;
	// 	for (current = this.head;
	// 			current.getNext() != null;
	// 			current = current.getNext()) {
	// 	}
	// 	current.setNext(new LNode(null, item));
	// }

	public String toString() {
		String output = "";
		for (LNode current = this.head;
				current != null;
				current = current.getNext()) {

			if (!output.equals("")) {
				output += ",";
			}
			output += current.getDatum();
		}
		return "[" + output + "]";
	}

	/* PRECONDITION: evens and odds are heads of sorted lists */
	private LNode merge(LNode evens, LNode odds) {
		LNode result = null, end = null;

		// As long as both have something to look at
		while (evens != null && odds != null) {
			// Compare the first element
			if (evens.getDatum() < odds.getDatum()) {
				// Handle empty result list (first item) or not
				if (result == null) {
					result = evens;
					evens = evens.getNext();
					result.setNext(null);
					end = result;
				} else {
					end.setNext(evens);
					end = evens;
					evens = evens.getNext();
					end.setNext(null);
				}
			} else {
				if (result == null) {
					result = odds;
					odds = odds.getNext();
					result.setNext(null);
					end = result;
				} else {
					end.setNext(odds);
					end = odds;
					odds = odds.getNext();
					end.setNext(null);
				}
			}
		}
		if (evens != null) {
			// we know odds == null
			if (end != null) 
				end.setNext(evens);
		} else {
			// we know evens == null
			if (end != null) 
				end.setNext(odds);
		}
		return result;
	}

	/* Returns the head node of the sorted list */
	private LNode mergesort(LNode first) {
		if (first == null || first.getNext() == null) {
			return first;
		}

		LNode evens = null, odds = null;
		boolean even = true;
		for (LNode current = first;
			current != null;
			current = current.getNext()) {

			if (even) {
				current.setNext(evens);
				evens = current;
			} else {
				current.setNext(odds);
				odds = current;
			}
		}

		mergesort(evens);
		mergesort(odds);
		return merge(evens, odds);
	}

	public void mergesort() {
		head = mergesort(this.head);
	}

	public static void main(String[] args) {
		LList list = new LList();

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
		list.mergesort();
		System.out.println(list);
	}
}
