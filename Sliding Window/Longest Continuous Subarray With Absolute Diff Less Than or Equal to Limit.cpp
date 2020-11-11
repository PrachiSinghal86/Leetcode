class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>qmax;
        deque<int>qmin;
        qmax.push_back(0);
        qmin.push_back(0);
        int ans=1,s=0,e=1;
        while(e<nums.size()&&s<nums.size())
        {
            //cout<<s<<" "<<e<<endl;
            
            while(!qmax.empty()&&nums[qmax.back()]<nums[e])
                qmax.pop_back();
            qmax.push_back(e);
            while(!qmin.empty()&&nums[qmin.back()]>nums[e])
                qmin.pop_back();
             qmin.push_back(e);
            if(nums[qmax.front()]-nums[qmin.front()]<=limit)
            {
                e+=1;
                //cout<<s<<" "<<e<<" ";
                ans=max(ans,e-s);
                //cout<<ans;
            }
            else
            {
                while(s<e&&nums[qmax.front()]-nums[qmin.front()]>limit)
                {
                if(qmin.front()==s)
                    qmin.pop_front();
                if(qmax.front()==s)
                    qmax.pop_front();
                s=s+1;
                }
            e+=1;
            ans=max(ans,e-s);      
            }
        }
        //cout<<s;
        if(e==nums.size())
        {
            //cout<<"a";
            ans=max(ans,e-s);
        }
        return ans;
    }
};