class Solution {
    
public:
    void rc(int n,vector <long >&vis,long &c,long &l)
    {
        if(n<l &&n>0)
        {
            c=c+vis[n];
            return ;
        }
        if(n==0)
        {
            c+=1;
            return ;
        }
        else if(n<0)
        {
            return ;
        }
        else
        {
            long s=c;
            for(int i=1;i<=2;i++)
            { 
                
                rc(n-i,vis,c,l);
                
            }
                 
                 s=c-s;
                 vis.push_back(s);
                 l+=1;
                 return ;
        }
    }
    int climbStairs(int n) {
        long c=0,l=1;
        vector<long> vis;
        
        vis.push_back(0);
        rc(n,vis,c,l);
        return c;
    }
    
};