#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout << "Non Parameterized" << endl;
    }

    Student(string name){
        cout << "Parameterized" << endl;
    }
};

// Compile Time Polymorphism
//? Function Overloading
class Math{
public:
    void sum(){
        cout << "Nothing to add" << endl;
    }

    int add(int a, int b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }
};
// Operator Overloading
class Print{
public:
    void show(int x){
        cout << "Value of x: " << x << endl;
    }

    void show(string x){
        cout << "Value of x: " << x << endl;
    }
};

// Runtime Time Polymorphism
// Function Overriding
class Parent {
public:
    virtual void show() {
        cout << "This is Parent Class" << endl;
    }

    void getinfo(){
        cout << "This is Parent Class" << endl;
    }

    virtual void experience(){
        cout << "Experience: 5 years" << endl;
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "This is Child Class" << endl;
    }

    void getinfo(){
        cout << "This is Child Class" << endl;
    }
    void experience(){
        cout << "Experience: 3 years" << endl;
    }
};

int main(){
    Student s1; // Non-Parameterized
    Student s2("Nur"); // Parameterized
    
    Math obj;
    obj.sum();
    cout << obj.add(2, 3) << endl;
    cout << obj.add(2, 3, 4) << endl;
    
    Print p;
    p.show(5);
    p.show("Nur");

    Parent pt;
    pt.show();
    pt.getinfo();
    
    Child c;
    c.show();
    c.getinfo();
    c.experience();

    return 0;
}