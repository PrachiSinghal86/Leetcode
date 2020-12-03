class Solution {
public:
    int minJumps(vector<int>& arr) {
        map<int,vector<int>>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        vector<bool>vis(arr.size(),false);
        vis[0]=true;
        q.push({0,0});
        while(!q.empty())
        {
            pair<int,int>t=q.front();
            
            q.pop();
              if(t.first>0&&vis[t.first-1]==false)
            {
                q.push({t.first-1,t.second+1});
                vis[t.first-1]=true;
            }
            if(t.first<arr.size()-1&&vis[t.first+1]==false)
            {
                if(t.first+1==arr.size()-1)
                        return t.second+1;
                    q.push({t.first+1,t.second+1});
                    vis[t.first+1]=true;
            }
            for(int j=m[arr[t.first]].size()-1;j>=0;j--)
            {
                if(vis[m[arr[t.first]][j]]==false)
                {
                    if(m[arr[t.first]][j]==arr.size()-1)
                        return t.second+1;
                    q.push({m[arr[t.first]][j],t.second+1});
                    vis[m[arr[t.first]][j]]=true;
                    
                }
            }
          
        }
        return 0;
    }
};