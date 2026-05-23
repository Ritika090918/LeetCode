class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
        int n = nums.size();
        
        int ans = 0;
        
        int start = 0;
        
        while(start < n) {
            
            // zero skip karo
            while(start < n && nums[start] == 0) {
                start++;
            }
            
            if(start >= n) break;
            
            int end = start;
            
            int negCount = 0;
            int firstNeg = -1;
            int lastNeg = -1;
            
            // zero aane tak subarray process karo
            while(end < n && nums[end] != 0) {
                
                if(nums[end] < 0) {
                    
                    negCount++;
                    
                    if(firstNeg == -1)
                        firstNeg = end;
                    
                    lastNeg = end;
                }
                
                end++;
            }
            
            // even negatives => pura segment positive
            if(negCount % 2 == 0) {
                
                ans = max(ans, end - start);
            }
            
            // odd negatives
            else {
                
                // first negative remove
                ans = max(ans, end - firstNeg - 1);
                
                // last negative remove
                ans = max(ans, lastNeg - start);
            }
            
            start = end;
        }
        
        return ans;
    }
};