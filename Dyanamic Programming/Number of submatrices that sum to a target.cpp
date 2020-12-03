class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        vector<vector<int>> dp( matrix.size(), vector<int> (matrix[0].size(), 0)); 
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                dp[i][j]+=matrix[i][j];
                if(i>0)
                    dp[i][j]+=dp[i-1][j];
                if(j>0)
                    dp[i][j]+=dp[i][j-1];
                if(i>0&&j>0)
                    dp[i][j]-=dp[i-1][j-1];
               // cout<<dp[i][j]<<" ";
                
            }
            //cout<<endl;
        }
        
        int c=0;
        
        for(int x1=0;x1<matrix.size();x1++)
        {
           for(int x2=x1;x2<matrix.size();x2++)
           {
               unordered_map<int,int>m;
               m.insert({0,1});
               for(int y1=0;y1<matrix[0].size();y1++)
               {
                   int s=dp[x2][y1];
                   if(x1>0)
                   {
                      s=s-dp[x1-1][y1]; 
                       
                   }
                   if(m.find(s-target)!=m.end())
                   { c=c+m[s-target];
                    //cout<<x2<<" "<<y1;
                   }
                   
                   m[s]+=1;
               }
           }
        }
        return c;
    }
};