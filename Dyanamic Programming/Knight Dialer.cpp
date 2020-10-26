class Solution {
public:
    int knightDialer(int N) {
        vector<vector<int>>cur(2,vector<int>(10,1));
        cur[1]={2,2,2,2,3,0,3,2,2,2};
        vector<vector<int>>m(10);
        m[0]={6,4};
        m[1]={6,8};
        m[2]={7,9};
        m[3]={4,8};
        m[4]={9,3,0};
        m[5]={};
        m[6]={7,1,0};
        m[7]={6,2};
        m[8]={3,1};
        m[9]={2,4};
        int c=0,d=0;
        for(int i=3;i<=N;i++)
        {
            if(i%2==0)
            {    c=1;
             d=0;
            }
            else
            { c=0;
             d=1;
            }
            for(int j=0;j<10;j++)
            {
                cur[c][j]=0;
                for(int k=0;k<m[j].size();k++)
                {
                    cur[c][j]+=cur[d][m[j][k]];
                    cur[c][j]=cur[c][j]%1000000007;
                }
            }
        }
        if(N%2==0)
            c=1;
        else
            c=0;
        int s=0;
        for(int i=0;i<10;i++)
        {
            s=(s+cur[c][i])%1000000007;
        }
        return s;
    }
};