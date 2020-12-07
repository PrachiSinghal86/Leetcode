class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==1)
                c=0;
            else
            {
                c+=1;
                if(c==3)
                {n-=1;
                 c=1;
                }
            }
            if(n==0)
                return true;
        }
        return false;
    }
};