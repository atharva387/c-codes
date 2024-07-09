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
      cin.ignore();
  }
  void display()
  {
      cout<<name<<endl;
      cout<<salary<<endl;
  }
    
};
class Manager : public Employee
{
    private :
    int teamSize;
    public:
    void setteamSize()
    {
        cout<<"ENTER TEAM SIZE";
        cin>>teamSize;
        cin.ignore();
        
    }
    void display()
    {
        Employee::display();
        cout<<teamSize;
    }
    
};
int main()
{
    Manager mgr;
    mgr.setDetails();
    mgr.setteamSize();
    mgr.display();
    return 0;
}