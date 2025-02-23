#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Properties / Data
    string name;
    string dept;
    string subject;

    // Functions / methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};

class Account
{
private:
    string password;
    string balance;

public:
    string accountId;
    string username;

    
};




int main()
{
    Teacher t1;
    Teacher t2;
    Teacher t3;

    t1.name = "Khadija";
    t1.dept = "CSE";
    t1.subject = "Computer Science";
    // t1.salary = 25000;

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    // cout << t1.salary << endl;
    t1.setSalary(35000);
    cout << t1.getSalary() << endl;

    t1.changeDept("EEE");
    cout << t1.dept << endl;

    return 0;
}