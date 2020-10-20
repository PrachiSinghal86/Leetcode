class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
       int c1=0,c2=0,f=0,mx=-1;
        int cr=A[0];
        for(int i=0;i<A.size();i++)
        {
            f=0;
            if(A[i]==cr)
            {  c1+=1;
             f=1;
            }
            if(B[i]==cr)
            {
                c2+=1;
                f=1;
            }
            if(f==0)
                break;
         
            
        }
        if(f==1)
            mx=min(A.size()-c1,A.size()-c2);
        
       
        cr=B[0];
        c1=0;
        c2=0;
          for(int i=0;i<A.size();i++)
        {
              f=0;
            if(A[i]==cr)
            {  c1+=1;
             f=1;
            }
            if(B[i]==cr)
            {
                c2+=1;
                f=1;
            }
            if(f==0)
                break;
         
        }
        if(f==1&&mx!=-1)
        {
            cr=min(A.size()-c1,A.size()-c2);
            mx=min(mx,cr);
            
        }
        else if(f==1)
            mx=min(A.size()-c1,A.size()-c2);
      
        return mx;
    }
};