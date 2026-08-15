class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> nge(nums2.size());

        // Find next greater for every element of nums2
        for(int i = nums2.size() - 1; i >= 0; i--) {
            
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if(st.empty()) {
                nge[i] = -1;
            } else {
                nge[i] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> ans;

        // nums1 ke order mein answer find karo
        for(int i=0; i<nums1.size(); i++) {
            int x=nums1[i];
            for(int i = 0; i < nums2.size(); i++) {
                if(nums2[i] == x) {
                    ans.push_back(nge[i]);
                    break;
                }
            }
        }

        return ans;
    }
};