class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int max = Integer.MIN_VALUE;
          int prefix=0;
        for(int i=0; i<n; i++){
          
                   prefix=prefix+nums[i];
                     max= Math.max(max,prefix);
                     if(prefix<0){
                        prefix=0;
                     }
            }
         

        
     return max;
        
    }
}