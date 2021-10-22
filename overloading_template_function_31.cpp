#include <iostream>
using namespace std;
template <class T>
class lovey
{
public:
    T data;
    lovey(T x) : data(x) {}

    void Display();
};

template <class T>
void lovey<T>::Display()
{
    cout << data;
}

void func(int a){
    cout<<"i am first func() "<<a<<endl;
}
 

template <class T>
void func(T a){
    cout<<"i am tempalised func() "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"i am tempalised func() "<<a<<endl;
}
int main()
{
    // lovey<int> l(53); //alg alag classes bann jayengi iss liye ise chalane ke liye diff name use
    // lovey<float> l(5.53);//  kr objects ke
    // lovey<char> l('g');
    // l.Display();
     
    //  func(3);// exact match takes the highest priority 
     func<int>(3);
     func1<int>(3);
    return 0;
}