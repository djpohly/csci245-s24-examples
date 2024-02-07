public class TreeNode {
	// do as i say not as i do
	public int datum;
	public TreeNode left;
	public TreeNode right;

	public TreeNode(int datum) {
		this.datum = datum;
	}

	public void add(int i) {
		if (datum == i) {
			return;
		}
		if (i < datum) {
			if (left == null) {
				left = new TreeNode(i);
				return;
			}
			left.add(i);
		} else {
			if (right == null) {
				right = new TreeNode(i);
				return;
			}
			right.add(i);
		}
	}

	public void remove(int i) {
	}

	public boolean contains(int i) {
		if (datum == i) {
			return true;
		}
		if (i < datum) {
			if (left == null) {
				return false;
			}
			return left.contains(i);
		} else {
			if (right == null) {
				return false;
			}
			return right.contains(i);
		}
	}
}
