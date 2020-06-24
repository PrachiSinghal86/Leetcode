class Solution
 {

public:

    bool isMonotonic(vector<int>& a)
 {

        int l=a.size();

        if(l<=2)

            return true;

        int f=-1;

        for(int i=1;i<l;i++)

            {

            if(a[i]>a[i-1] && f==-1)

            f=1;

            else if(a[i]<a[i-1]&& f==-1)

                f=0;

            else if(a[i]<a[i-1] && f==1)

                return false;

            else if(a[i]>a[i-1] && f==0)


                return false;

        }

        return true;

    }

};