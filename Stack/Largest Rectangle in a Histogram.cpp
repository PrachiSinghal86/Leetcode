class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0)
            return 0;
        stack<int>s;
        s.push(0);
        int a,mx=0;
        for(int i=1;i<heights.size();i++)
        {
            if(s.empty())
                s.push(i);
            else
            {
            int t=s.top();
            if(heights[t]<=heights[i])
                s.push(i);
            else
            {
                while(!s.empty()&&heights[s.top()]>heights[i])
                {
                    t=s.top();
                    s.pop();
                    if(s.empty())
                        a=heights[t]*(i);
                    else
                        a=heights[t]*(i-s.top()-1);
                    mx=max(a,mx);
                        
                }
                s.push(i);
            }
            }
        }
        int i=heights.size();
         while(!s.empty())
                {
                    int t=s.top();
                    s.pop();
                    if(s.empty())
                        a=heights[t]*(i);
                    else
                        a=heights[t]*(i-s.top()-1);
                    mx=max(a,mx);
                        
                }
      return mx;
    }
};