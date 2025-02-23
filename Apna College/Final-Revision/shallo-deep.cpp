#include<bits/stdc++.h>
using namespace std;

class Student{
public: 
    string name;
    // double cgpa;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void getInfo(){
        cout<<"Name is: "<<name<<endl;
        cout<<"CGPA is: "<<*cgpaPtr<<endl;
    }

    ~Student(){
        cout << "Destructor called for " << name << endl;
        delete cgpaPtr;
    }
};

int main(){
    Student s1("Nur", 3.55);
    s1.getInfo();

    Student s2(s1);
    s2.getInfo();
    *s2.cgpaPtr = 3.99;
    s2.getInfo();
    s1.getInfo();
}