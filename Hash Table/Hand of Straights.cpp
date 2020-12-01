class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
         if(hand.size()==0&&W==0)
            return true;
        else if(hand.size()==0)
            return false;
        else if(hand.size()%W!=0)
            return false;
        sort(hand.begin(),hand.end());
        map<int,int>m;
        m.insert(make_pair(hand[0],1));
        for(int i=1;i<hand.size();i++)
        {
            if(hand[i]==hand[i-1])
                m[hand[i]]+=1;
            else
            {
                m.insert(make_pair(hand[i],1));
            }
        }
        for(int i=0;i<hand.size();i++)
        {
            if(m[hand[i]]>0)
            {
                m[hand[i]]-=1;
                for(int j=1;j<W;j++)
                {
                    if(m[hand[i]+j]>0)
                        m[hand[i]+j]-=1;
                    else
                    { 
                        return false;
                    }
                }
            }
        }
        return true;
    }
};