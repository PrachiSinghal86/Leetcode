class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i=0,j=A.size()-1;
        while(i<j)
        {
            while(i<=j&&A[i]%2==0)
                i++;
            while(j>=i&&A[j]%2!=0)
                j--;
            if(i<j)
            {
                int t=A[j];
                A[j]=A[i];
                A[i]=t;
                i+=1;
                j-=1;
            }
        }
        return A;
        
    }
};