class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_set<int>s;
        for(int i=3;i<stones.size();i++)
            if(stones[i]>stones[i-1]*2)
                return false;
      
        for(int i=1;i<stones.size();i++)
            s.insert(stones[i]);
        stack<int>pos;
        stack<int>jump;
        pos.push(0);
        jump.push(0);
        while(!pos.empty())
        {
            int tp=pos.top();
            int tj=jump.top();
            pos.pop();
            jump.pop();
            for(int i=tj-1;i<=tj+1;i++)
            {
                if(i<=0)
                    continue;
                if(s.find(tp+i)!=s.end())
                {
                    if(tp+i==stones[stones.size()-1])
                        return true;
                    pos.push(tp+i);
                   
                    jump.push(i);
                }
            }
            
        }
        return false;
    }
};