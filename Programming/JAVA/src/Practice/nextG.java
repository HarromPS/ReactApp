package Practice;

public class nextG {
    public static void main(String[] args) {
        int nums[] = new int[7];
        int arr[] = new int[7];
        for (int i = 0; i < nums.length; i++) {
            int x = 0, k = 0,j=0;
            while (x < nums.length) {
                if (nums[i] < nums[(j)% nums.length]) {
                    arr[i]=(nums[(j) % nums.length]);
                    k = 1;
                    break;
                }
                x++;
                j++;
            }
            if (k == 0) {
                arr[i]=(-1);
            }
        }
    }
}
