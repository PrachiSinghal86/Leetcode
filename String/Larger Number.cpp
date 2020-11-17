class Solution {
public:
    bool static compared(string a,string b)
    {
        return (b+a<a+b);
    }
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i=0;i<nums.size();i++)
            v.push_back(to_string(nums[i]));
        sort(v.begin(),v.end(),compared);
        if(v[0]=="0")
            return "0";
        string ot="";
        for(int i=0;i<nums.size();i++)
            ot=ot+v[i];
        return ot;
            
    }
};