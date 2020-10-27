class doublelis
{
    public:
    int key;
    int val;
    doublelis* prev;
    doublelis* next;
    doublelis()
    {
        prev=NULL;
        next=NULL;
    }
};
class LRUCache {
public:
    int c;
    doublelis* head=NULL;
    doublelis* tail=NULL;
    int size;
    map<int,doublelis*>m;
    
    LRUCache(int capacity) {
        c=capacity;
        size=0;
    }
    
    int get(int key) {
      if(m.find(key)!=m.end())  
      {
          doublelis *temp=m[key];
          if(temp==head)
              return temp->val;
          if(temp->next==NULL)
              tail=tail->prev;
          temp->prev->next=temp->next;
          if(temp->next!=NULL)
              temp->next->prev=temp->prev;
          temp->next=head;
          temp->prev=NULL;
          head->prev=temp;
          head=temp;
          return temp->val;
      }
        else 
            return -1;
    }
    
    void put(int k, int v) {
       if(m.find(k)!=m.end())
       {
            doublelis *temp=m[k];
          if(temp==head)
          {
              temp->val=v;
             return;
          }
          if(temp->next==NULL)
              tail=tail->prev;
          temp->prev->next=temp->next;
          if(temp->next!=NULL)
              temp->next->prev=temp->prev;
          temp->next=head;
          temp->prev=NULL;
          head->prev=temp;
          head=temp;
          temp->val=v;
       }
        else
        {
            if(size==c)
            {
                doublelis *temp=tail;
                tail=tail->prev;
                size--;
                m.erase(temp->key);
                if(temp->prev!=NULL)
                    temp->prev->next=NULL;
               // free(temp);
            }
            doublelis* t=new doublelis();
            t->next=head;
            t->key=k;
            t->val=v;
            if(head!=NULL)
                head->prev=t;
            size++;
            head=t;
            m[k]=t;
            if(tail==NULL)
                tail=head;
            
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */