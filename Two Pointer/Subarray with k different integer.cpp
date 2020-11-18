class Solution {
public:
    int temp(vector<int>& A, int K)
    {
        if(K==0)
            return 0;
        vector<int>m(20001,0);
        int j=0;
        int d=0,c=0;
        for(int i=0;i<A.size();i++)
        {
            if(m[A[i]]==0)
            {
                d+=1;
                m[A[i]]=1;
            }
            else
                m[A[i]]+=1;
            if(d<=K)
            {
               c=c+(i-j+1);   
            }
            else
            {
                while(j<i&&d>K)
                {
                    m[A[j]]-=1;
                    if(m[A[j]]==0)
                        d-=1;
                    j+=1;
                }
                c=c+i-j+1;
            }
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& A, int K) {
        return temp(A,K)-temp(A,K-1);
    }
};