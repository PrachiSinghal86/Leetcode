class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        long int e1=-1,e2=-1,ec1=0,ec2=0,i;
        long n=a.size();
        vector<int>s;
        for( i=0;i<n;i++)
    {
        if(a[i]==e1)
        {
            ec1++;
        }
        else if(e2==a[i])
        {
            ec2++;
        }
        else if(ec1==0)
        {
            ec1=1;
            e1=a[i];
        }
        else if(ec2==0)
        {
            ec2=1;
            e2=a[i];
        }
        else{
            ec1--;
            ec2--;
        }
    }
    ec1=0;
    ec2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==e1)
        {
            ec1++;
        }
        else if(a[i]==e2)
        {
            ec2++;
        }
    }
    int h=0;
    if (ec1>int(n/3))
    {
        s.push_back(e1);
    }
    if(ec2>int(n/3))
    {
        s.push_back(e2);
    }
   return s;
    }
};