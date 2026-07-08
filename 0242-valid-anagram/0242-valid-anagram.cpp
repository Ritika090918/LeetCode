class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m!=n) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0; i<n; i++){
            m1[s[i]]++;
        }
        for(int i=0; i<m; i++){
            m2[t[i]]++;
        }
        for(auto x:m1){
           char ch1=x.first;
           int freq1=x.second;
           if(m2.find(ch1)!=m2.end()){
            int freq2=m2[ch1];
            if(freq1!=freq2) return false;
           }else{
             return false;
           }
        }
        return true;
    }
};