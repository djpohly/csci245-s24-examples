public class BST {
	private TreeNode root;

	public void add(int i) {
		if (root == null) {
			root = new TreeNode(i);
			return;
		}
		root.add(i);
	}

	public void remove(int i) {
		if (root == null) {
			return;
		}
		root.remove(i);
	}

	public boolean contains(int i) {
		if (root == null) {
			return false;
		}
		return root.contains(i);
	}

	public static void main(String[] args) {
		BST tree = new BST();
		System.out.println("start: " + tree.contains(0));
		tree.remove(5);
		System.out.println("remove 5: " + tree.contains(5));

		tree.add(5);
		tree.add(2);
		tree.add(9);
		tree.add(7);
		tree.add(9);
		tree.add(1);
		tree.add(0);
		tree.add(1);

		for (int i = 0; i < 10; i++)
			System.out.println(tree.contains(i));
		tree.remove(2);
		tree.remove(1);
		System.out.println();
		for (int i = 0; i < 10; i++)
			System.out.println(tree.contains(i));
	}
}
