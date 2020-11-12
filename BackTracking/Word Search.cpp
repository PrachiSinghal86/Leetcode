class Solution {
public:
    bool p(vector<vector<char>>& board, vector<vector<int>>&vis,int i,int j,string word,int k)
    {
        if(k==word.size())
            return true;
        bool d=false;
        if(i>0&&vis[i-1][j]==0&&board[i-1][j]==word[k])
        {   vis[i-1][j]=1;
            d=p(board,vis,i-1,j,word,k+1);
            vis[i-1][j]=0;
         if(d==true)
             return d;
         }
         if(j>0&&vis[i][j-1]==0&&board[i][j-1]==word[k])
        {   vis[i][j-1]=1;
            d=p(board,vis,i,j-1,word,k+1);
            vis[i][j-1]=0;
         if(d==true)
             return d;
         }
         if(i<board.size()-1&&vis[i+1][j]==0&&board[i+1][j]==word[k])
        {   vis[i+1][j]=1;
            d=p(board,vis,i+1,j,word,k+1);
            vis[i+1][j]=0;
         if(d==true)
             return d;
         }
         if(j<board[0].size()-1&&vis[i][j+1]==0&&board[i][j+1]==word[k])
        {   vis[i][j+1]=1;
            d=p(board,vis,i,j+1,word,k+1);
            vis[i][j+1]=0;
         if(d==true)
             return d;
         }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    vis[i][j]=1;
                    bool c=p(board,vis,i,j,word,1);
                    vis[i][j]=0;
                    if(c==true)
                        return c;
                }
            }
        }
        return false;
    }
};