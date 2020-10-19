class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if(k==cardPoints.size())
            return accumulate(cardPoints.begin(),cardPoints.end(),0);
        int s=accumulate(cardPoints.begin(),cardPoints.begin()+k,0);
        int m=s;
        int i=k-1,j=cardPoints.size()-1;
        while(i>=0)
        {
            s=s-cardPoints[i];
            s=s+cardPoints[j];
            i--;
            j--;
            m=max(s,m);
        }
        return m;
        
    }
};