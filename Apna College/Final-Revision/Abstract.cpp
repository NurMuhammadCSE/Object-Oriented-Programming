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

int main(){
    Circle c;
    c.draw();
    return 0;
}