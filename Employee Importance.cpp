/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
      vector<int> f(2001,-1);
        int l=employees.size();
        for(int i=0;i<l;i++)
        {
            f[employees[i]->id]=i;
            
        }
      int c=0;
        vector<int> s;
          s.push_back(id);
          
          int ln=1,x;
          while (ln>0)
          {
              x=s[ln-1];
              s.pop_back();
              ln=ln-1;
              
              c=c+employees[f[x]]->importance;
              for(int j=0;j<employees[f[x]]->subordinates.size();j++)
              {
                  s.push_back(employees[f[x]]->subordinates[j]);
                  ln+=1;
              }
          }
        return c;
    }
};