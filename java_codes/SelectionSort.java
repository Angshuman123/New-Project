import java.util.Scanner;

public class SelectionSort {
	
	public static void main(String[] args) {
		
		int n, temp;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of elements:");
		n = sc.nextInt();
		int arr[] = new int[n];
		
		System.out.println("Enter the elements in the array:");
		for(int i = 0; i < n; i++) 
			arr[i] = sc.nextInt();
		
		for(int i = 0; i < n - 1; i++) {
			
			int min = i;
			
			for(int j = i  + 1; j < n; j++) {
				if(arr[j] < arr[min]) 
					min = j;
			}
			
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
		
		System.out.println("The Sorted array:");
		for(int i = 0; i < n; i++) {
			System.out.println(" " + arr[i]);
		}
		sc.close();
	}
}
