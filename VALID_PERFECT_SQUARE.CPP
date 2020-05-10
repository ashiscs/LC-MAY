class Solution {
public:
    bool isPerfectSquare(int num) {
        int c;
        
        c = floor(pow(num,0.5));
        
        if(c*c == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/* OUTPUT

Input: 16
Output: true

Input: 14
Output: false

*/
