class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size()<3)
            return 0;
        int mx=0;
        for(int i=1;i<A.size()-1;i++)
            {
            int l=0,r=0;
            for(int j=i-1;j>=0;j--){
                if(A[j]<A[j+1])l++;
            else
                break;}
            for(int j=i+1;j<A.size();j++)
                {
                if(A[j]<A[j-1])r++;
                else
                    break;
            }
            if(l!=0&&r!=0)
                mx=max(mx,l+r+1);
        }
        return mx;
    }
};