public class LNode {
	private LNode next;
	private int datum;

	public LNode(LNode next, int datum) {
		this.next = next;
		this.datum = datum;
	}

	public LNode getNext() {
		return next;
	}

	public void setNext(LNode node) {
		next = node;
	}

	public int getDatum() {
		return datum;
	}

	public void addLast(int item) {
		if (next == null) {
			next = new LNode(null, item);
			return;
		}

		next.addLast(item);
	}
}
