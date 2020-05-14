class Trie {

public:
     bool isend;
 
 Trie * links[26]; 
    /** Initialize your data structure here. */
    Trie() {
      
      isend=false;
      for(int i=0;i<26;i++)
      {
          links[i]=NULL;
      }
      
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        
        Trie *p=this;
        
        int l=word.size();
        for(int i=0;i<l;i++)
        {
            
            int x=word[i]-'a';
            if(p->links[x]==NULL)
            {
                Trie *o=new Trie();
                p->links[x]= o;
            }
            p=p->links[x];
                
        }
     p->isend=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie *p =this;
        int l=word.size();
        int f=0;
        for(int i=0;i<l;i++)
        {
            int x=word[i]-'a';
            if(p->links[x]==NULL)
            {
                f=1;
                break;
            }
            p=p->links[x];
        }
        if(f==0)
        {
            if(p->isend==true)
            {
                return true;
            }
        }
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
        Trie *p =this;
        int l=word.size();
        int f=0;
        for(int i=0;i<l;i++)
        {
            int x=word[i]-'a';
            if(p->links[x]==NULL)
            {
                f=1;
                break;
            }
            p=p->links[x];
    }
        if(f==0)
        {
            return true;
        }
        else
            return false;
    }    
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */