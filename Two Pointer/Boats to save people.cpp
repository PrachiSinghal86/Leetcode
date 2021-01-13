class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int c=0;
        while(i<j)
        {
          if(people[j]+people[j-1]<=limit)
              j=j-2;
            else if(people[i]+people[j]<=limit)
            {
                i+=1;
                j-=1;
            }
            else
            {
                j-=1;
            }
         c+=1;
           
        }
        if(i==j)
            c+=1;
        return c;
    }
};