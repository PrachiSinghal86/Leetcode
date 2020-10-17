class Solution {
public:
    void p(vector<vector<char>>& board,int i,int j)
    {
        if(i<0||i>=board.size()||j<0||j>=board[0].size())
            return;
        board[i][j]='*';
        if(i>0&&board[i-1][j]=='O')
            p(board,i-1,j);
        if(i<board.size()-1&&board[i+1][j]=='O')
            p(board,i+1,j);
        if(j>0&&board[i][j-1]=='O')
            p(board,i,j-1);
        if(j<board[0].size()-1&&board[i][j+1]=='O')
            p(board,i,j+1);
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()==0||board[0].size()==0)
            return;
        int m=board.size();
        int n=board[0].size(),i,j;
        for(i=0;i<m;i++)
        {
            if(board[i][0]=='O') p(board,i,0);
            if(board[i][n-1]=='O') p(board,i,n-1);
            
        }
        for(i=0;i<n;i++)
        {
            if(board[0][i]=='O') p(board,0,i);
            if(board[m-1][i]=='O') p(board,m-1,i);
            
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='*')
                    board[i][j]='O';
            }
        }
        return;
    }
};