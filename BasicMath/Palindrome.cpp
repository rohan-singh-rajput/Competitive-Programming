class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long org_num = x;
        long long rev_num = 0;  
       
        while(x!=0){
            
            int temp = x %10;
            rev_num = rev_num*10 + temp;
            x /= 10;

        }

        return (rev_num == org_num);
        
    }
};