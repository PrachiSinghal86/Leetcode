class Solution {
public:
    int smallestRepunitDivByK(int k) {
     int n=1;
     unordered_set<int>s;
        int c=1;
     while(n%k!=0)
         {
         int r=n%k;
         if(s.find(r)==s.end())
             s.insert(r);
         else
             return -1;
         n=r*10+1;
         c+=1;
     }
        
        return c;
    }
};