#include<iostream>
//here 'this' is a pointer pointing to the object which is running or whihc invokes the function 
// i.e "this " is storing the address of the num
using namespace std;
class tut{
    int a ,b;
    public:
    // tut& setData(int a ,int b){  //return type is reference type that which returns the obj not value
    void setData(int a ,int b){  
        this->a=a; //we used 'this' keyword to tell compiler that first a is class member not argument
        this->b=b; //or (*this).b = b;
        // return *this; //here we are not returning the value of object but we are returning the actual object
    }
    void display(void){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
    }
};
int main(){
    tut num;
    // num.setData(4,3).display();
    num.setData(4,3);
    num.display();
    return 0;
}




/*
uses of this :-
-helps to write same argument for understanding better 
-we use it to return the object itself sometimes  
for e.g -
if we write --reutrn *this and with return type tut& -- (it will return object itself)
and if we write --reutrn *this and with return type tut -- (it will return value of object)
*/