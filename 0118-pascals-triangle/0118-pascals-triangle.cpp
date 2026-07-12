class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
     int n=numRows;
    vector<vector<int>> ans;
   
     for(int i=0; i<n; i++){
        int curr=1;
         vector<int>row;

        for(int j=0; j<=i; j++){
            row.push_back(curr);
            curr=curr*(i-j)/(j+1);
        }
        ans.push_back(row);
     }
     return ans;
    }
};