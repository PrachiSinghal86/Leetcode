class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(n==1)
            return letters[0];
        if(letters[n-1]<=target||target<letters[0])
        { 
            return letters[0];}
        int f=0,e=n-1;
        while(f<e)
        {
            int m=(e+f)/2;
            
            if(letters[e]>target&&letters[e-1]<=target)
                return letters[e];
            if(letters[m]>target&&letters[m-1]<=target)
                return letters[m];
            else if(letters[m]<=target)
            {
                f=m+1;
            }
            else
                e=m-1;
            
        }
        return letters[f];
        
    }
};