class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>ot;
        if(buildings.size()==0)
            return ot;
        vector<vector<int>>l;
        for(int i=0;i<buildings.size();i++)
        {
            l.push_back({buildings[i][0],-buildings[i][2]});
            l.push_back({buildings[i][1],buildings[i][2]});
        }
        sort(l.begin(),l.end());
        //cout<<"a";
        /*
       for(int i=0;i<l.size();i++)
       {
           for(int j=i+1;j<l.size();j++)
           {
               
               if(l[i][0]>l[j][0])
                   
               {   
                   swap(l[i],l[j]);
                // cout<<l[i][1]<<" "<<l[j][1];
               }
               else if(l[i][0]==l[j][0])
               {
                   if((l[i][2]==0&&l[j][2]==0&&l[i][1]<l[j][1])||(l[i][2]==1&&l[j][2]==1&&l[i][1]>l[j][1]))
                   {
                    
                   swap(l[i],l[j]);
                   }
                   else if(l[i][2]!=l[j][2]&&l[i][2]==1)
                       swap(l[i],l[j]);
               }
           }
       }
       */
       //cout<<l[3][1]<<l[4][1]<<l[5][1]<<l[3][2];
       multiset<int>pq;
        pq.insert(0);
        int mx=0;
        for(int i=0;i<l.size();i++)
        {
            if(l[i][1]<0)
            {
             pq.insert(-l[i][1]);
             //cout<<l[i][1]<<" ";
            }
           else {                                     
                pq.erase(pq.find(l[i][1]));
            }
            
            if (*pq.rbegin() != mx)
            {      
                ot.push_back({l[i][0], mx = *pq.rbegin()});
            }
        }
        return ot;
    }
};