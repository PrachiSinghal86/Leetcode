class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> h(10,0);
        vector<int> h2(10,0);
        int a=0,b=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
                a++;
            h[secret[i]-48]++;
            h2[guess[i]-48]++;
        }
        for(int i=0;i<=9;i++)
        {
            b=b+min(h[i],h2[i]);
        }
        b=b-a;
        string ans=to_string(a)+"A"+to_string(b)+"B";
        return ans;
    }
};