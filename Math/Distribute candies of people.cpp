class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ot(num_people,0);
        if(num_people==1)
        {
            ot[0]=candies;
            return ot;
        }
        int i=0,c=1;
        while(candies>0)
        {
            ot[i]=ot[i]+min(c,candies);
            candies-=c;
            c=c+1;
            
            i=(i+1)%num_people;
        }
        return ot;
    }
};