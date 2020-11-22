class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string s=to_string(n);
        int c=0;
        int x=digits.size();
        sort(digits.begin(),digits.end());
        for(int i=1;i<s.size();i++)
        {
            c=c+x;
            x=x*digits.size();            
        }
        for(int j=0;j<s.size();j++)
        {
            int i=0;
            while(i<digits.size()&&digits[i][0]<s[j])
            { c=c+pow(digits.size(),s.size()-1-j);
             i++;
            }
            if(i==digits.size()||digits[i][0]>s[j])
                return c;
            
        }
        c+=1;
        return c;
    }
};