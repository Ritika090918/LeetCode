class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (st.empty() ) {
                st.push(s[i]);
            }
            else if (s[i] == '(') {
                st.push(s[i]);
            }
            else if (s[i] == ')') {
                if (st.top() == '(') {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }

        while (!st.empty()) {
            st.pop();
            c++;
        }

        return c;
    }
};