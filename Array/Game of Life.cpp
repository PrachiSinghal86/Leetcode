class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> r={-1,0,0,1,-1,1,-1,1};
        vector<int>cn={0,1,-1,0,-1,1,1,-1};
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                int c=0;
                for(int k=0;k<8;k++)
                {
                    int rw=i+r[k];
                    int cw=j+cn[k];
                    if(rw<0||rw>=board.size()||cw<0||cw>=board[i].size())
                        continue;
                    if(board[rw][cw]==1||board[rw][cw]==-1)
                        c+=1;
                }
                if(board[i][j]==1&&c<2)
                   board[i][j]=-1;
                else if(board[i][j]==0&&c==3)
                    board[i][j]=-2;
                else if(board[i][j]==1&&c>3)
                    board[i][j]=-1;
            }
        }
          for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]==-1)
                    board[i][j]=0;
                else if(board[i][j]==-2)
                    board[i][j]=1;
            }
         }
    }
};