import java.util.Scanner;

public class InsertionSort {

		public static void main(String[] args) {
			
			Scanner sc = new Scanner(System.in);
			
			System.out.println("Enter the number of elements: ");
			int n = sc.nextInt();
			
			int[] arr = new int[n];
			
			int number,j;
			
			System.out.println("Enter the elements:");
			
			for(int i = 0; i < n; i++) {
				
				number = sc.nextInt();
				j = i - 1;
				while(j >= 0 && arr[j] > number) {
					arr[j+1] = arr[j];
					j = j - 1;
				}
				arr[j+1] = number;
			}
			
				
			System.out.println("The sorted array: ");
			for(int i = 0; i < n; i++) {
				System.out.println(arr[i] + "\n");
			}
			
			sc.close();
		}
}