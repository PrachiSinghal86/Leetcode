class Solution {
     static bool comparator(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]<b[0];
    }
public:
   
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),comparator);
        vector<vector<int>>ot( people.size(), vector<int> (2, -1));
        
        for(int i=0;i<people.size();i++)
        {
            int count=people[i][1];
            for(int j=0;j<people.size();j++)
            {
                if(count==0&&ot[j][1]==-1)
                {
                    ot[j][0]=people[i][0];
                    ot[j][1]=people[i][1];
                    break;
                }
                if(ot[j][1]==-1||ot[j][0]>=people[i][0])
                    count-=1;
            }
        }
        
        return ot;
    }
};