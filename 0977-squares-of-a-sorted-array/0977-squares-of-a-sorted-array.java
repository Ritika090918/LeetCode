class Solution {
    public int[] sortedSquares(int[] nums) {
            int n=nums.length;
            int []arr=new int[n];
        for(int i=0; i<n; i++){
               arr[i]=nums[i]*nums[i];
        }
        for (int i = 0; i < arr.length - 1; i++) {
    for (int j = 0; j < arr.length - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
return arr;
    }
}