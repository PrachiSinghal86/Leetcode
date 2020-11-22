class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>ot;
        vector<string>s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++)
        {
            string t="";
            for(int j=0;j<words[i].size();j++)
            {
                t=t+s[words[i][j]-97];
                
            }
            ot.insert(t);
        }
        return ot.size();
    }
};