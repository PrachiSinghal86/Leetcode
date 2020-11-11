class Solution {
public:
    int dist(vector<int>& p1, vector<int>& p2)
    {
        return (p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int d1=dist(p1,p2);
        int d2=dist(p1,p3);
        int d3=dist(p1,p4);
        if(d1==0||d2==0||d3==0)
            return false;
        if(d1==d2&&2*d1==d3&&2*dist(p3,p4)==dist(p2,p3))
            return true;
        if(d2==d3&&2*d2==d1&&2*dist(p3,p2)==dist(p4,p3))
            return true;
        if(d3==d1&&2*d1==d2&&2*dist(p3,p4)==dist(p2,p4))
            return true;
        return false;
    }
};