class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int mx=-1,c=0;
        for(int i=0;i<arr.size();i++)
        {
            mx=max(mx,arr[i]);
            if(i==mx)
            {
                c+=1;
            }
        }
        return c;
    }
};