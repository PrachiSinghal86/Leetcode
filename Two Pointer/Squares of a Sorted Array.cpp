class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>t;
        int i=0,j=A.size()-1;
        while(i<=j)
        {
            if(abs(A[i])>abs(A[j]))
            { t.push_back(A[i]*A[i]);
             i++;
            }
            else
            {
                t.push_back(A[j]*A[j]);
                j--;
            }
        }
        reverse(t.begin(),t.end());
        return t;
    }
};