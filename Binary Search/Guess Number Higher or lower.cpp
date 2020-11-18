/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int f=1,e=n;
        while(f<=e)
        {
           int m=f+(e-f)/2;
            int x=guess(m);
            if(x==0)
            {
                return m;
                
            }
            if(x<0)
            {
                e=m-1;
            }
            else
                f=m+1;
        }
        return f;
    }
};