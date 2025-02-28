#include<bits/stdc++.h>
using namespace std;

class Shape{
    virtual void draw() = 0;
};

class Circle: public Shape{
public:
    void draw(){
        cout<<"Drawing a Circle"<<endl;
    }
};

class Rectangle: public Shape{
public:
    void draw(){
        cout<<"Drawing a Rectangle"<<endl;
    }
};

void fun(){
    // int x = 0; // 0 0 0
    static int x = 0;
    cout << x << endl;
    x++;
}

class A{
public:
    int x;

    void incX(){
        x++;
    }
};

class ABC{
public:
    ABC(){
        cout << "Constructor" << endl;
    }

    ~ABC(){
        cout << "Destructor" << endl;
    }
};

int main(){
    Circle c;
    c.draw();

    fun();
    fun();
    fun();

    A a1;
    a1.x = 10;
    cout << a1.x << endl;

    A a2;
    a2.x = 20;
    cout << a2.x << endl;


    if(1){
        // ABC obj;
        static ABC obj;
    }
    cout << "End of Main Function" << endl;
    return 0;
}