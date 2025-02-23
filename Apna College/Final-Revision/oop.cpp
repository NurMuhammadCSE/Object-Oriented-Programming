#include<bits/stdc++.h>
using namespace std;

class Teacher{
public:
    string name;
    string dept;
    int salary;

    Teacher(){
        cout<<"New Teacher Created"<<endl;
    }

    void GetSalary(){
        cout<<"Salary of "<<name<<" is "<<salary<<endl;
    }

    void changeDept(string newDept){
        dept = newDept;
    }
};

class Account{
private:
    int balance;
    int password;
public:
    string username;

    Account(){
        cout<<"New Account Created"<<endl;
    }
    
    void setBalance(int b){
        balance = b;
    }

    void setPassword(int p){
        password = p;
    }

    void showBalance(){
        cout<<"Balance is "<<balance<<endl;
    }

    void showPassword(){
        cout<<"Password is "<<password<<endl;
    }

    int getBalance(){
        return balance;
    }

    int getPassword(){
        return password;
    }
};

int main(){
    Teacher t1;
    t1.name = "Rahul";
    t1.dept = "EEE";
    t1.salary = 100000;
    t1.GetSalary();
    t1.changeDept("CSE");

    cout << t1.name << " " << t1.dept << " " << t1.salary << endl;

    Account a1;
    
    a1.setBalance(1000);
    a1.setPassword(1234);
    a1.showBalance();
    a1.showPassword();

    cout << a1.getBalance() << endl;
    cout << a1.getPassword() << endl;
    return 0;
}