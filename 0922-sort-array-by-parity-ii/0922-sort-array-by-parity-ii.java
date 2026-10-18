class Solution {
    public int[] sortArrayByParityII(int[] nums) {
        int n=nums.length;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                    if(((nums[i]%2==0 && i%2!=0 ) ||(nums[i]%2!=0 && i%2==0)) &&
                             ((nums[j]%2==0 && j%2!=0 ) ||(nums[j]%2!=0 && j%2==0))
                              && nums[i]%2!=nums[j]%2                                )  {
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    break;
                }
            }
        }
        return nums;
        
    }
}