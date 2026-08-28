class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int p=0;
        for(int i=0; i<n; i++){
            int c=0;
            while(nums[i]>0){
                int digit=nums[i]%10;
                c++;
                nums[i]=nums[i]/10;
            }
            if(c%2==0){
                p=p+1;
            }
        }
        return p;
        
    }
};