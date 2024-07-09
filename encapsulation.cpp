#include<iostream>
#include<string>
using namespace std;
class Employee 
{
    private:
    string name;
    double salary;
    public:
    void setDetails()
  {
      cout<<"enter name";
      getline(cin, name);
       cout<<"set salary";
      cin>>salary;
  }
  void getDetails()
  {
      cout<<name<<endl;
      cout<<salary<<endl;
  }
    
};
int main()
{
    Employee emp;
    emp.setDetails();
    emp.getDetails();
    return 0;
}