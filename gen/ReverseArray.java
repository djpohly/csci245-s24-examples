public class ReverseArray {
	public static <T> void reverseArray(T[] a) {
		for (int i = 0; i < a.length / 2; i++) {
			T temp = a[i];
			a[i] = a[a.length - 1 - i];
			a[a.length - 1 - i] = temp;
		}
	}

	public static void main(String[] args) {
		Double[] arr = new Double[]{3.0, 4.0};
		reverseArray(arr);
		for (int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]);
		}
	}
}
