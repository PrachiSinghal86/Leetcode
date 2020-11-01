class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        vector<int>p;
        int s=0,mx=0;
        p.push_back(0);
        for(int i=0;i<A.size();i++)
        {
            s=s+A[i];
            
            p.push_back(s);
        }
        int i,j;
        for(j=L;j<=A.size();j++)
        {
            int t=p[j]-p[j-L];
            for(i=j+1;i<=A.size()-M+1;i++)
            {
                
                mx=max(mx,t+p[i+M-1]-p[i-1]);
              
            }
        }
        
        for(j=M;j<=A.size();j++)
        {
            int t=p[j]-p[j-M];
            for(i=j+1;i<=A.size()-L+1;i++)
            {
                
                mx=max(mx,t+p[i+L-1]-p[i-1]);
            }
        }
        return mx;
    }
};