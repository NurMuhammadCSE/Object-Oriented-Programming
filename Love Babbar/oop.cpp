#include <bits/stdc++.h>
using namespace std;



class Student
{
private:
    string name;
    int age;
public:
    int height;

public:
    int getAge()
    {
        return this->age;
    }

    void setAge(int g)
    {
        age = g;
    }
};

class Male : public Student
{
public:
    void sleep()
    {
        cout << "Male is Sleeping" << endl;
    }
};

int main()
{

    Student st;
    st.setAge(24);
    cout << "Student Age: " << st.getAge() << endl;

    Male m1;
    m1.sleep();
    m1.setAge(30);
    cout << m1.getAge() << endl;

    m1.height = 25;
    cout << m1.height << endl;
}