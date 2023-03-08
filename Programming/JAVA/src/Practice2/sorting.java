package Practice2;

import java.util.ArrayList;
import java.util.Arrays;
import java.lang.Math;

class Solution {
    public ArrayList<Integer> findDuplicates(int[] nums) {
        ArrayList<Integer> v = new ArrayList<Integer>();
        for (int i = 0; i < nums.length; i++) {
            int j = Math.abs(nums[i]) - 1;
            nums[j] = -nums[j];
            if (nums[j] > 0) {
                v.add(j + 1);
            }
        }
        return v;
    }
};

public class sorting {
    static public void main(String[] args) {
        int nums[] = new int[3];
        Arrays.sort(nums);
        ArrayList<Integer> v = new ArrayList<Integer>();
        int i = 0, j = i + 1;
        if (nums.length == 2) {
            if (nums[0] == nums[1]) {
                v.add(nums[0]);
            }
            // return v;
        }
        while (j < nums.length && i < nums.length - 1) {
            if (nums[i] == nums[j]) {
                v.add(nums[j]);
                i = j + 1;
                j = i + 1;
            } else if (nums[i] != nums[j]) {
                i = i + 1;
                j = j + 1;
            }
        }
    }
};
