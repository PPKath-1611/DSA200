class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        long rev = 0;
        long t = x;
        while(t)
        {
            rev = rev * 10 + t % 10;
            t /= 10;
        }
        if(rev == x)
        {
            return true;
        }
        else{
            return false;
        }
    }
};