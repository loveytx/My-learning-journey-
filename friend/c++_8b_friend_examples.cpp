#include <iostream>
using namespace std;
// class Y; //forward declaration so that compiler knows why 'Y' is written in line 9 and
// // doesn't give an error

// class X{
//     int data;
//     public:
//     friend void add(X s1 , Y s2);
//     void setData(int value){
//         data = value;
//     }
// };
// class Y{
//     int num;
//     public:
//     friend void add(X s1 , Y s2);
//     void setData(int value){
//         num = value;
//     }
// };
// void add(X s1 , Y s2){
//     cout<<"the summing of the data of x and y is :"<<(s1.data+s2.num)<<endl;
// }
// int main(){
//     X c1;
//     c1.setData(2);
//     Y c2;
//     c2.setData(6);
//     add(c1,c2);
//     return 0;
// }





//swapping the private data of one class and the other one
class Y;
class X
{
    int val1;

public:
    friend void swap(X &, Y &);//we can also mention s1 and s2 here, it will not throw
                       //error because they are variables of the function
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class Y
{
    int val2;

public:
    friend void swap(X &, Y &); //call by referance
    void inData(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void swap(X &s1, Y &s2)
{
    int temp;
    temp = s1.val1;
    s1.val1 = s2.val2;
    s2.val2 = temp;
}


int main()
{
    X c1;
    Y c2;
    c1.inData(2);
    c1.display();
    c2.inData(7);
    c2.display();

    swap(c1, c2);
    cout<<"the value of c1 after swapping is :";
    c1.display();

    cout<<"the value of c2 after swapping is :";
    c2.display();

    return 0;
}