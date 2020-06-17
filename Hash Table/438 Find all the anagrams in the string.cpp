class Solution {
public:
    bool istrue(int *a){
       
       for(int i=0; i<26; i++){
           if(a[i] != 0){
               return false; }
       }
        return true;
       }
    vector<int> findAnagrams(string s, string p) {
         int n=s.size(), m=p.size();
        vector<int>a;
        
        if(n<m) return a;
        
        int nchar[26]={0}, check[26]={0};
        
        for(int i=0; i<m; i++){
            nchar[p[i] -'a']++;
        }
        
        for(int i=0; i<m; i++){
            nchar[s[i]-'a']--;
        }
        
        if(istrue(nchar)) a.push_back(0);
        
        for(int i=1; i<=n-m; i++){
            nchar[s[i-1] -'a']++;
            nchar[s[i+m-1] -'a']--;
            
            if(istrue(nchar)) a.push_back(i);
            
        }
        return a;
    }
};