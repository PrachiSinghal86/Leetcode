class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(),i,m=-1,x;
        for(i=n-1;i>=0;i--)
            {
            x=arr[i];
            arr[i]=m;
            m=max(x,m);
            
        }
        return arr;
    }
};