class Solution {
public:
    int temp(string s,int i,int j)
    {
        while(i>=0&&j<s.size()&&s[i]==s[j])
        {
            i--;
            j++;
        }
        return j-i-1;
    }
    string longestPalindrome(string s) {
        if(s.size()<1)
            return "";
        int st=0,ed=0;
        for(int i=0;i<s.size();i++)
        {
            int l1=temp(s,i,i);
            int l2=temp(s,i,i+1);
            l1=max(l1,l2);
            if(l1>ed-st)
            {
                st=i-(l1-1)/2;
                ed=i+(l1)/2;
            }
        }
      
        return s.substr(st,ed-st+1);
    }
};