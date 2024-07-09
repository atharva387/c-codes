#include<iostream>
#include<string>
using namespace std;
class Employee
{
    protected:
    string name;
    double salary;
    public:
    void setdetails()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter salary: ";
        cin>>salary;
    }
     
    virtual void work()=0;
    void display()
    {
        cout<<"name: "<<name<<endl<<"salary: "<<salary<<endl;
    }
};
class Developer : public Employee{
    public :
    void work()
    {
       
        cout<<name<<"is writing code ";
    }
};
int main (){
    Developer dev;
    dev.setdetails();
    dev.display();
    dev.work();
    return 0;
}