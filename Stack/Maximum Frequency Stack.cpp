class FreqStack {
public:
       map<int,stack<int>>g;
        map<int,int>freq;
    int mxf;
    FreqStack() {
   
        mxf=0;
    }
    
    void push(int x) {
        if(freq.find(x)!=freq.end())
        {
            freq[x]+=1;
        }
        else
            freq[x]=1;
       if(freq[x]>mxf)
           mxf=freq[x];
        g[freq[x]].push(x);
        
    }
    
    int pop() {
        int y=g[mxf].top();
        g[mxf].pop();
        freq[y]-=1;
        if(g[mxf].empty())
            mxf-=1;
        return y;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */