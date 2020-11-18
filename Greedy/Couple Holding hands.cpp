class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int c=0,part;
        for(int i=0;i<row.size();i+=2)
        {
            if(row[i]%2==0)
                part=row[i]+1;
            else
                part=row[i]-1;
            if(row[i+1]==part)
                continue;
            for(int j=i+2;j<row.size();j++)
            {
                if(row[j]==part)
                {
                    swap(row[j],row[i+1]);
                    c+=1;
                    break;
                }
            }
        }
        return c;
    }
};