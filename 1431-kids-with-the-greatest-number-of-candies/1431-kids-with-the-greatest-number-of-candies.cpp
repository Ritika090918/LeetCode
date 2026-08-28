class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
      
       int maxCand=candies[0];
        for(int i=0; i<n; i++){
               
          if(candies[i]>=maxCand){
           
        maxCand=candies[i];
          }
  

        }
     vector<bool>ans;

        for(int i=0; i<n; i++){
            if((candies[i]+extraCandies)>=maxCand){
                ans.push_back(true);

            }else{
                ans.push_back(false);
            }
        }
        return ans;
        
    }
};