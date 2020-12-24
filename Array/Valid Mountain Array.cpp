class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int inc=true;
        if(arr[1]<=arr[0]||arr[arr.size()-1]>=arr[arr.size()-2])
            return false;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                return false;
            if(arr[i]<arr[i-1]&&inc==true)
                inc=false;
            else if(arr[i]>arr[i-1]&&inc==false)
                return false;
        }
        return true;
    }
};