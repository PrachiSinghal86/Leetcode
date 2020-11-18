class Solution {
public:
    int temp(vector<int>& weights,int c,int D)
    {
        int cnt=1,s=weights[0];
        for(int i=1;i<weights.size();i++)
        {
            if(s+weights[i]>c)
            {
                cnt+=1;
                s=weights[i];
            }
            else
                s=s+weights[i];
            if(cnt>D)
                return cnt;
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        if(D==weights.size())
            return *max_element(weights.begin(),weights.end());
        int s=*max_element(weights.begin(),weights.end());
        int e=accumulate(weights.begin(),weights.end(),0);
        while(s<e)
        {
            int m=(s+e)/2;
            int t=temp(weights,m,D);
            if(t>D)
                s=m+1;
            else 
                e=m;
        }
        return s;
        
    }
};