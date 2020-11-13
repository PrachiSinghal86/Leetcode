class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int>s;
        for(int i=0;i<T.size();i++)
        {
            while(!s.empty()&&T[s.top()]<T[i])
            {
                T[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            T[s.top()]=0;
            s.pop();
        }
        return T;
    }
};