#include <iostream>
using namespace std;

class Parent {
public:
    int a = 10;
    void show() {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent {  
public:
    void display() {
        cout << "Child Class" << endl;
    }
};

int main() {
    Child obj;
    obj.show();   // Parent Class 
    obj.display(); // Child Class

    cout << obj.a << endl; // Parent Class Variable

    return 0;
}
