package Practice;

import java.util.Scanner;

public class BinarySearch {
    static int found(int arr[], int target, int low, int high) {
        if (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (target < arr[mid]) {
                return found(arr, target, low, mid - 1);
            } else if (arr[mid] < target) {
                return found(arr, target, mid + 1, high);
            }
        }
        return -1;
    }

    static int BinarySearchFunction(int[] arr, int target) {
        int r = found(arr, target, 0, arr.length - 1);
        return r;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        System.out.print("Enter a target to search in the array: ");
        int target = sc.nextInt();
        int result = BinarySearchFunction(arr, target);
        if (result != -1) {
            System.out.println("Target found at index: " + result);
        } else {
            System.out.println("Target Not found");
        }
        sc.close();
    }
}
