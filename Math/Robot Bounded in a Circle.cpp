class Solution {
public:
    bool isRobotBounded(string instructions) {
        char d='n';
        int x=0,y=0;
        for(int i=0;i<instructions.size();i++)
        {
            if(instructions[i]=='G')
            {
                if(d=='n') x++;
                else if(d=='e')y++;
                else if (d=='s')x--;
                else y--;
            }
            else if(instructions[i]=='L')
            {
                if(d=='n')
                {
                    
                    d='e';
                }
                else if(d=='e')
                {
                    
                    d='s';
                }
                else if(d=='s')
                {
                    d='w';
                   
                }
                else
                {
                   
                    d='n';
                }
            }
            else 
            {
                if(d=='n')
                {
                 
                    d='w';
                }
                else if(d=='e')
                {
                 
                    d='n';
                }
                else if(d=='s')
                {
                    d='e';
                    
                }
                else
                {
                    
                    d='s';
                }
            }
        }
        if(x==0&&y==0)
            return true;
        else if(d!='n')
            return true;
        return false;
    }
};