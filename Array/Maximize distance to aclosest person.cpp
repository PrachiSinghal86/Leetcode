class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int x=-1,mx=0,i=0;
        while(i<seats.size())
        {
            if(seats[i]==1)
            {   x=i;
                i++;
                
             continue;
            }
            while(i<seats.size()&&seats[i]==0)
                i++;
            if(x==-1&&x<i)
            {
                 mx=max(mx,(i-x)-1);
            }
            else if(x<i)
            {
               int j=ceil((i-x)/2);
                mx=max(j,mx);
            }
        }
         if(x<i)
            {
                mx=max(mx,(i-x)-1);
            } 
        return mx;
    }
};