class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=1,j=1;
        
        if(typed.size()<name.size())
            return false;
        if(name[0]!=typed[0])
            return false;
        while(i<name.size()&&j<typed.size())
        {
            if(name[i]!=typed[j])
            {
              if(typed[j]==typed[j-1])
                  j+=1;
            else
                return false;
            }
            else
            {
                i+=1;
                j+=1;
            }
        }
        if(i<name.size())
            return false;
        if(j<typed.size())
        {
            while(j<typed.size())
                if(typed[j]==typed[j-1])
                    j++;
               else
                   return false;
        }
        return true;
            
        
    }
};