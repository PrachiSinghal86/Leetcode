class Solution {
public:
    int findMinFibonacciNumbers(int k) {
      int l=1,c=0;
      vector<int> a;
        a.push_back(1);
        a.push_back(1);
     if(k==0 ||k==1)
         return k;
    while(a[l]<k)
        {
        a.push_back(a[l]+a[l-1]);
        l+=1;
    }
        while(k>0)
            {
            if(k>=a[l])
                {
                k-=a[l];
                c+=1;
            }
            else
                l-=1;
        }
        return c;
    }
};