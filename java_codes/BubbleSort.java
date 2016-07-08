import java.util.Scanner;

public class BubbleSort {

	public static void main(String[] args) {

		int n, temp = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of elements:");
		n = sc.nextInt();
		int arr[] = new int[n];
		System.out.println("Enter the elements in the array");
		for (int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}

		for (int i = 0; i < arr.length - 1; i++) {

			for (int j = 0; j < arr.length - 1 - i; j++) {

				if (arr[j] > arr[j + 1]) {
					temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		System.out.println("The sorted array is:");
		for (int i = 0; i < n; i++)
			System.out.println(" " + arr[i]);
		sc.close();
	}
}
