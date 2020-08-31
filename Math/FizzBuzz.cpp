class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ot;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0&&i%5==0)
                ot.push_back("FizzBuzz");
            else if(i%3==0)
                ot.push_back("Fizz");
            else if(i%5==0)
                ot.push_back("Buzz");
            else
            {
               string r=to_string(i);
                ot.push_back(r);
            }
        }
        return ot;
    }
};