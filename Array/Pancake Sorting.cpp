class Solution {
public:
    vector<int> pancakeSort(vector<int>& a) {
        int n=a.size();
        int j=n,k,l,mx;
        vector<int>ot;
		while(j>1)
		{
            mx=a[0];
			k=0;
			for(l=1;l<j;l++)
			{
				if(a[l]>mx)
				{
					mx=a[l];
					k=l;
				}
			}
		
			if(k!=j-1)
			{
				
				ot.push_back(k+1);
				for(l=0;l<=k/2;l++)
				{
					int t=a[l];
					a[l]=a[k-l];
					a[k-l]=t;

				}
				for(l=0;l<j/2;l++)
				{
					int t=a[l];
					a[l]=a[j-l-1];
					a[j-l-1]=t;
				}
				ot.push_back(j);

			}
			
			j-=1;

		}
		return ot;
    }
};