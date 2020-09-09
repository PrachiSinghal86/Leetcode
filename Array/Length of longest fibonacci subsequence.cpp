class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int n=A.size();
         unordered_set<int> S(A.begin(),A.end()); 
         
         int mx=0,i,j,l;
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 int x=A[j];
                 
                 int y=A[i]+A[j];
                 l=2;
                 while(S.find(y)!=S.end())
                 {
                     
                     int z=x+y;
                      x=y;
                     y=z;
                     l++;
                     if(mx<l)
                     {
                        
                         mx=l;
                     }
                 }
             }
         }
        if(mx>=3)
            return mx;
        return 0;
    }
};