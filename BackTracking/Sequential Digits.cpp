class Solution {
public:
    void p(int low,int high,int n,vector<int>&ot)
    {
        if(n>=low&&n<=high)
        {
            ot.push_back(n);
        }
        else if(n>high)
            return;
        int x=n%10;
        if(x==9)
            return;
            
        p(low,high,n*10+(x+1),ot);
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ot;
        for(int i=1;i<=9;i++)
        {
            p(low,high,i,ot);
        }
        sort(ot.begin(),ot.end());
        return ot;
    }
};