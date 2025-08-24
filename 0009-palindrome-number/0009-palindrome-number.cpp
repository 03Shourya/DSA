class Solution {
public:
    bool isPalindrome(int x) 
    {
       long int final=0,y=x;
        while(x>0)
        {
           long int digit=x%10;
            final=final*10+digit;
            x=x/10;
            
        }
        return y==final;
    }
};