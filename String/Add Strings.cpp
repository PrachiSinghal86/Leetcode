class Solution {
public:
    string addStrings(string num1, string num2) {
        int a1=num1.size()-1,a2=num2.size()-1;
        int c=0,x1,x2;
        string ot="";
        
        
        while(a1>=0||a2>=0)
        {
            if(a1>=0)
            {  
                x1=int(num1[a1])-48;
             }
            else
                x1=0;
            if(a2>=0)
                x2=int(num2[a2])-48;
            else
                x2=0;
           
            ot.append(to_string((x1+x2+c)%10));
            
            c=(x1+x2+c)/10;
            a1--;
            a2--;
        }
        if(c>0)
            ot.append(to_string(c));
        reverse(ot.begin(),ot.end());
        return ot;
    }
};