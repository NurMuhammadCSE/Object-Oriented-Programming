#include <bits/stdc++.h>
using namespace std;

// class Employee{};
// class Manager extends Employee{};
// Employee employee = new Manager();

class Counter
{
    static int count;

public:
    Counter()
    {
        count += 1;
        cout << count << " ";
    }
};

class Teacher
{
private:
    int salary;

public:
    // Attributes / Properties
    string name;
    string dept;
    string subject;

    // non parameterized
    Teacher()
    {
        cout << "I am constructor\n";
        dept = "Computer Science";
    }

    // Parameterized
    // Teacher(string n,string s, int sal, string d){
    //     name = n;
    //     subject = s;
    //     salary = sal;
    //     dept = d;
    // }

    //? Special Pointer
    Teacher(string name, string subject, int salary, string dept)
    {
        this->name = name;
        this->subject = subject;
        this->salary = salary;
        this->dept = dept;
    }

    //? Copy Constructor
    Teacher(Teacher &originalObj)
    {
        cout << "I am copy Constructor" << endl;
        this->name = originalObj.name;
        this->dept = originalObj.dept;
        this->salary = originalObj.salary;
        this->subject = originalObj.subject;
    }

    // Methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << "Name is: " << name << endl;
        cout << "Subject is: " << subject << endl;
        cout << "Department is: " << dept << endl;
    }
};

class Account
{
private:
    string password;
    double balance;

public:
    string username;
    string accountId;
};

int Counter::count = 0;

class Candidate
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Candidate Name: " << name << " age is " << age << endl;
    }

    Candidate()
    {
        cout << "The Candidate Information" << endl;
    }

    Candidate(string x, int y)
    {
        name = x;
        age = y;
    }
};

// int a = 0, b = 10, c;
// for (int  i = 1; i <= b; i++)
// {
//     if (a > 0 and a <= 3)
//     {
//             c = b >> a;
//     }
//     ++a;

//     if (a > 2) a -= i;
//     else
//     {
//         /* code */
//         b += (c - i);
//     }
//     b--;

// }
// cout << a << " " << b << " " << c << endl;

int main()
{
    Teacher t1; // auto constructor call
    // t1.name = "Nur";
    // t1.subject = "OOP";
    // // t1.dept = "CSE";
    // // t1.salary = 25000; // -> Private
    // t1.setSalary(25000);

    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // cout << t1.subject << endl;

    // // t1.changeDept("EEE");

    // cout << t1.dept << endl;
    // cout << t1.getSalary() << endl;
    // cout << t1.dept << endl;

    //? Single Line
    Teacher t2("Nur", "CSE", 25000, "Computer Science");
    // t2.getInfo();

    //? Copy Constructor
    Teacher t3(t2); // Default Copy Constructor
    t3.getInfo();

    Counter count1;
    Counter count3;
    Counter count2;

    Candidate ab;
    Candidate firstCandidate("Ahmed", 25);
    firstCandidate.display();

    int a = 2, b = 10, c;
    for (int i = 1; i <= b; i++)
    {
        if (a > 0 and a <= 3)
        {
            c = b >> a; // b কে a বিট শিফট করা হচ্ছে
        }
        ++a;

        if (a > 2)
            a -= i;
        else
        {
            b += (c - i); // c থেকে i বাদ দেওয়া হবে এবং b তে যোগ করা হবে
        }
        b--; // b এর মান ১ কমানো হবে
    }

    cout << a << " " << b << " " << c / a << endl;

    int n = 12;
    int i;

    for (i = 0; i <= n / 2; i++)
    {
        if (i <= 5)
        {
            i++;
        }
        else
        {
            break;
        }
    }

    cout << (i) << endl;


    int x = 2, p = 1, sum = 0;
    double q;

    while (p < 5)
    {
        q = x + p % 2;
        sum += (x++) + (int)q;
        cout << sum << endl;
        p += 2;
    }

    sum += p;
    cout << sum << endl;
    
}

// (A+B)/C*C+E^F