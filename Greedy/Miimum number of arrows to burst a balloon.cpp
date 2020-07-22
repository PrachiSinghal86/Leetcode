class Solution {
public:
    bool sortcol( vector<int>& v1, 
              vector<int>& v2 ) { 
 return v1[0] < v2[0]; 
} 
    int findMinArrowShots(vector<vector<int>>& points) {
        int l=points.size();
        if(l==0)
            return 0;
        
        
          sort(points.begin(), points.end(),[this](vector<int> a, vector<int> b){
             return (sortcol(a,b));});
        int c=1,s=points[0][0],e=points[0][1],i;
        
        for(i=1;i<l;i++)
        {
            if(points[i][0]>e)
            {
                c+=1;
                e=points[i][1];
                s=points[i][0];
                cout<<i;
            }
            else
            {
                s=points[i][0];
                e=min(points[i][1],e);
            }
        }
        return c;
         
    }
};