#include<iostream>
using namespace std;
// template <class T1= int , class T2= float>
// class lovey{
//     public:
//     T1 a;
//     T2 b;
//     lovey(T1 a,T2 b ){
//         this->a = a;
//         this->b = b;
//     }
//     void Display(){
//        cout<<"The value of a  is : "<<a<<endl;
//        cout<<"The value of b  is : "<<b<<endl;
//     }
// };
// int main(){
//     lovey <float,char>l(54,'v');
//     l.Display();
    
//     return 0;
// }


// function template
template<class T1, class T2>
float funcavg(T1 x,T2 y){
    float avg = (x+y)/2;
    return avg;
}

int main(){
    float avg = funcavg(4.5,2.4);
    cout<<"the avg of these two numbers is : "<<avg;
    
    return 0;
}
