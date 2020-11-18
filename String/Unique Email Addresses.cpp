class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(int i=0;i<emails.size();i++)
        {
            string ot="";
            bool p=false;
            for(int j=0;j<emails[i].size();j++)
            {
                if(emails[i][j]=='@')
                {
                    ot=ot+emails[i].substr(j);
                    s.insert(ot);
                    break;
                }
                else if(emails[i][j]=='+')
                {
                    p=true;
                }
                else if(emails[i][j]!='.'&&p==false)
                    ot.push_back(emails[i][j]);
            }
        }
        return s.size();
    }
};