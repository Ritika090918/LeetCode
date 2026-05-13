class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int r=x;
        long long rev=0;
        while(x!=0){
            int p=x%10;
            rev=((rev*10)+p);
            x=x/10;
         
        }if(r==rev){
            return true;
        }
        return false;
    }
};