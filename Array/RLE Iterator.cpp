class RLEIterator {
public:
    vector<int>a;
    int c;
    RLEIterator(vector<int>& A) {
       a=A; 
        c=0;
    }
    
    int next(int n) {
       while(c<a.size()&&a[c]<n)
       {
           n=n-a[c];
           a[c]=0;
           c+=2;
       }
        if(c==a.size())
            return -1;
        else
        {
            a[c]-=n;
            return a[c+1];
        }}
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */