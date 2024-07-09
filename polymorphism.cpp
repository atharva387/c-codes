#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    void setDetails() {
        cout << "Enter name: ";
        getline(cin, name); // Reading the full name
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore(); // To ignore the newline character left by cin
    }

    virtual void work() {
        cout << "Employee is working." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};

class Developer : public Employee {
public:
	void setDetails() {
        cout << "Enter Age: ";
        getline(cin, name); // Reading the full name
        cout << "Fav color: ";
        cin >> salary;
        cin.ignore(); // To ignore the newline character left by cin
    }   

    void display() {
        cout << "Age: " << name << ", Color: " << salary << endl;
    }
    void work() override {
        cout << name << " is writing code." << endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << name << " is managing the team." << endl;
    }
};

int main() {
    Developer* emp1 = new Developer();
    Employee* emp2 = new Manager();

    cout << "Enter details for Developer:" << endl;
    emp1->setDetails();
    emp1->display();
    emp1->work();

    cout << "Enter details for Manager:" << endl;
    emp2->setDetails();
    emp2->display();
    emp2->work();

    delete emp1;
    delete emp2;

    return 0;
}
