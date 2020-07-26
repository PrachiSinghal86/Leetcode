class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x=numbers.size()-1,f=0;
        while(f<x)
        {
            if(numbers[f]+numbers[x]==target)
            {
                vector<int>a;
                a.push_back(f+1);
                    a.push_back(x+1);
                return a;
            }
            else if(numbers[f]+numbers[x]>target)
                x--;
            else
                f++;
        }
        vector<int>a;
        a.push_back(numbers[f]);
        a.push_back(numbers[x]);
        return a;
        
    }
};