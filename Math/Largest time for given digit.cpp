class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(),A.end());
        int c=-1;
        string ot="";
        bool l=false,r=false;
        
        bool val=true;
        while(val)
        {
            if(A[0]*10+A[1]<24&&A[2]*10+A[3]<=59)
            {
                
                
                if(A[0]*1000+A[1]*100+A[2]*10+A[3]>c)
                {  c=A[0]*1000+A[1]*100+A[2]*10+A[3];
                
                   ot=to_string(A[0])+to_string(A[1])+":"+to_string(A[2])+to_string(A[3]);
                 

                }
            }
           
            val=next_permutation(A.begin(),A.end());
           
        }
        
        if(c==-1)
        {
            return ot;
        }
      
        else
        {
            
            return ot;
        }
        
    }
};