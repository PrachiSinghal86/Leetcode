class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>ot;
        int n=arr.size();
        int m=(n-1)/2;
        m=arr[m];
        int s=0;
        n=n-1;
        while(s<=n&&k>0)
        {
            if(abs(arr[s]-m)>abs(arr[n]-m))
            {
                ot.push_back(arr[s]);
                s+=1;
            }
            else
            {
                ot.push_back(arr[n]);
                n-=1;
            }
            k-=1;
        }
        return ot;
    }
};