class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>ot(n,vector<int>(n));
     int l=0,r=n-1,u=0,d=n-1;
        int c=1;
        while(l<=r&&u<=d)
        {
            for(int i=l;i<=r;i++)
            {
                ot[u][i]=c;
                c++;
            }
            u++;
            for(int i=u;i<=d;i++)
            {
                ot[i][r]=c;
                c++;
            }
            r--;
            for(int i=r;i>=l;i--)
            {
                ot[d][i]=c;
                c++;
            }
            d--;
            for(int i=d;i>=u;i--)
            {    ot[i][l]=c;
            c++;}
            l++;
        }
        return ot;
    }
};