class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>m;
        for(int i=0;i<text.size();i++)
        {
            if(m.find(text[i])!=m.end())
            {
                m[text[i]]+=1;
            }
            else
            {
                m.insert(pair<char,int>(text[i],1));
            }
        }
        int mn=text.size();
        if(m.find('b')!=m.end())
        {
            if(mn>m['b'])
            {
                mn=m['b'];
            }
        }
        else
            return 0;
          if(m.find('a')!=m.end())
        {
            if(mn>m['a'])
            {
                mn=m['a'];
            }
        }
        else
            return 0;
          if(m.find('l')!=m.end())
        {
            if(mn>m['l']/2)
            {
                mn=m['l']/2;
            }
        }
        else
            return 0;
          if(m.find('o')!=m.end())
        {
            if(mn>m['o']/2)
            {
                mn=m['o']/2;
            }
        }
        else
            return 0;
          if(m.find('n')!=m.end())
        {
            if(mn>m['n'])
            {
                mn=m['n'];
            }
        }
        else
            return 0;
    return mn;
    }
};