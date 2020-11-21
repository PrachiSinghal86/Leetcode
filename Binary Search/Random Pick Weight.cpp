class Solution {
public:
    vector<int> p;
    Solution(vector<int>& w) {
       
        p.push_back(w[0]);
        for(int i=1;i<w.size();i++)
        {
            p.push_back(w[i]+p[i-1]);
            
        }
    }
    
    int pickIndex() {
        int x=rand()%p.back();
        return upper_bound(p.begin(),p.end(),x)-p.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */