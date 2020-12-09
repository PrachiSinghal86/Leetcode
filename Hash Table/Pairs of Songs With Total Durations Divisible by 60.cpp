class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>v(60,0);
        int c=0;
        
        for(int i=0;i<time.size();i++)
        {
             if(time[i]%60==0)
             {
                 c=c+v[0];
             }
            else
            {
                c=c+v[60-time[i]%60];
                
            }
            v[time[i]%60]+=1;
        }
        return c;
    }
};