class Solution {
public:
    bool isPalindrome(int x) {
    long  rev=0, rem, temp;
     
    temp = x;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==x)
       return true ;
    else
         return false ;
         
        
    }
};