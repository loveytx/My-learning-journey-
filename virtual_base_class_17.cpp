#include<iostream>
using namespace std;
/*
student--> test
student--> sports
test-->result
sports-->result
*/
//yaha pr roll num test ne bhi inherit kiya hai and sports ne bhi isliye jab result class
//dono se inherit krti hai to wo ambiguis ho jata hai isliye compiler kehta ki tu virtual keyword laga 
//de, and main samjh jaunga ki ek baaar hi lena hai roll number ko 


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
        cout << "the roll number of student is :" << roll_number << endl;
    }
};

class Test : virtual public Student
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
        cout << "The marks of roll numeber. " 
        << roll_number << " in physics is " << physics 
        << " and in maths is " << maths << endl;
    }
};
class Sports: public virtual Student{
    protected:
    float score;
    public:
    void set_score(int sc){
        score = sc;
    }
    void get_score(void){
        cout<<"Your pt score is :"<<score<<endl;
    }

};
class result : public Test,public Sports
{
    float percentage;

public:
    // result(){
    //     percentage = (maths+physics)/2;
    //     cout<<"the percentage of roll number "<<roll_number<<" is : "<<percentage<<endl;
    // }

    void display(void)
    {   get_roll_number();
        get_marks();
        get_score();
        percentage = (maths + physics + score) / 3;
        cout << "The percentage of roll no. " << roll_number << " is " << percentage << endl;
    }
};

int main(){
    result  lovey;
    lovey.set_roll_number(1);
    lovey.set_marks(87,98);
    lovey.set_score(99);
    lovey.display();
    
    return 0;
}