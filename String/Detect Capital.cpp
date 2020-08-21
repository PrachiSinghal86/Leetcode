class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0;i<word.size();i++)
        {
            if((word[i]-90<=0))
                c+=1;
        }
       
        if(c==1&& word[0]-90<=0)
            return true;
        if(c==word.size()||c==0)
            return true;
        return false;
        
    }
};