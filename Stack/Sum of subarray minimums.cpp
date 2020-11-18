class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<pair<int,int>>s1,s2;
        vector<int>l(arr.size());
       
        for(int i=0;i<arr.size();i++)
        {
            int c=1;
            while(!s1.empty()&&s1.top().first>arr[i])
            {
                c+=s1.top().second;
                s1.pop();
            }
            s1.push({arr[i],c});
            l[i]=c;
        }
        unsigned int res=0;
         for(int i=arr.size()-1;i>=0;i--)
        {
            unsigned int c=1;
            while(!s2.empty()&&s2.top().first>=arr[i])
            {
                c+=s2.top().second;
                s2.pop();
            }
            s2.push({arr[i],c});
             //cout<<l[i]<<" "<<c;
             unsigned int x=arr[i];
             res=res+((l[i]*((c*x)%1000000007))%1000000007);
             res=res%1000000007;
        }
        return res;
    }
};