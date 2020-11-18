class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
            return 0;
        vector<int>hand(prices.size());
        vector<int>sold(prices.size());
        vector<int>nos(prices.size());
        nos[0]=0;
        sold[0]=0;
        hand[0]=-1*prices[0];
        for(int i=1;i<prices.size();i++)
        {
            nos[i]=max(nos[i-1],sold[i-1]);
            sold[i]=hand[i-1]+prices[i];
            hand[i]=max(nos[i-1]-prices[i],hand[i-1]);
        }
        return max(nos[prices.size()-1],sold[prices.size()-1]);
    }
};