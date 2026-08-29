class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int c1 = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                c++;
                
                if(c > c1) {
                    c1 = c;
                }
            }
            else {
                c = 0;
            }
        }

        return c1;
    }
};