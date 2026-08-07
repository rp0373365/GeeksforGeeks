class Solution {
  public:
    int reverseDigits(int x) {
        // Code here
        int rev = 0 , ld;
        bool isNegative = false;
        if(x<0)
        {
            isNegative = true;
            x = -x;
        }
        while(x>0)
        {
            ld = x%10;
            rev = (rev*10)+ld;
            x=x/10;
        }
        if(isNegative)
        {
            return 0;
        }
        return rev;
    }
};