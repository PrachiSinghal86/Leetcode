class Solution {
public:
    int shortestSubarray(vector<int>& A, int k) {
        int n=A.size();
        for(int i=1;i<n;i++)
	{
	   A[i]+=A[i-1];
	}
	
	int ans=INT_MAX;
	deque<pair<int,int>>dq;
	dq.push_back({0,-1});
	for(int i=0;i<n;i++)
	{
		while(!dq.empty()&&A[i]-dq.front().first>=k)
		{
			ans=min(ans,i-dq.front().second);
			//cout<<ans<<" ";
			dq.pop_front();
		}
		while(!dq.empty()&&dq.back().first>=A[i])
		  dq.pop_back();
		  dq.push_back({A[i],i});
	}
	//cout<<endl;
	if(ans==INT_MAX)
	return -1;
	else
	return ans;

    }
};