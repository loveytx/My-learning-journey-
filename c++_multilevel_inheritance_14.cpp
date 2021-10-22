#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number(void)
    {
        cout << "the value of roll number is :" << roll_number << endl;
    }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float phy)
    {
        maths = m;
        physics = phy;
    }
    void get_marks(void)
    {
        cout << "the marks of roll numeber. " << roll_number << " in physics is " << physics << " and in maths is " << maths << endl;
    }
};
class result : public Exam
{
    float percentage;

public:
    // result(){
    //     percentage = (maths+physics)/2;
    //     cout<<"the percentage of roll number "<<roll_number<<" is : "<<percentage<<endl;
    // }

    void display(void)
    {  get_roll_number();
        get_marks();
        percentage = (maths + physics) / 2;
        cout << "the percentage of roll no. " << roll_number << " is " << percentage << endl;
    }
};

int main()
{
    result rohan;
    rohan.set_roll_number(4);
    rohan.set_marks(47.5, 98.0);  
    rohan.display();

    return 0;
}