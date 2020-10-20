class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
      vector<string>ot;
        if(folder.size()==0)
            return ot;
      sort(folder.begin(),folder.end());
        string c=folder[0];
        ot.push_back(c);
        int i;
        for(i=1;i<folder.size();i++)
        {
            if(folder[i].find(c) == std::string::npos)
            {
                c=folder[i];
                ot.push_back(c);
            }
            else
            {
                if(folder[i][c.size()]!='/')
                {
                    
                c=folder[i];
                ot.push_back(c);
                }
            }
        }
        return ot;
    }
};