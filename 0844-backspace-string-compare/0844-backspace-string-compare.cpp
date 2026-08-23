class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        stack<char>st1;
        stack<char>st2;
        for(int i=0; i<n; i++){
          if(s[i]=='#'){
            if(!st1.empty()){
                st1.pop();
            }
            }else{
                st1.push(s[i]);
            }
        }
        string x="";
        while(!st1.empty()){
          x=x+st1.top();
          st1.pop();
        };
           for(int i=0; i<m; i++){
            if(t[i]=='#'){
                if(!st2.empty())
                st2.pop();
            }else{
                st2.push(t[i]);
            }
        }
         string y="";
        while(!st2.empty()){
          y=y+st2.top();
          st2.pop();
        };
        if(x==y){
            return true;
        }
         return false;
    }
   
};