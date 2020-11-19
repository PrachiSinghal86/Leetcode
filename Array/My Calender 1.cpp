class MyCalendar {
public:
    vector<vector<int>>se;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(int i=0;i<se.size();i++)
        {
           if(se[i][0]<end&&start<se[i][1])
               return false;
        }
        se.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */