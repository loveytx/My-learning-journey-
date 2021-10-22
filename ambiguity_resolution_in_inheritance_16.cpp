#include<iostream>
using namespace std;
class base1{
    public:
   void greet(){
       cout<<"Good morning\n";

    }

};
class base2{
    public:
   void greet(){
       cout<<"How are you?\n";

    }

};
class derived:public base1, public base2{
    public:
    // void greet(){
    //     base1::greet();  //we have mentioned here to run greet function of base1 class 
    // }

};

class B {
    public:
    void say(){
        cout<<"hello world\n";
    }
};

class D : public B{
    public:
    //D's new say() method will over write base class's say() method 
    void say(){
        cout<<"hello my beautiful people\n";
    }
};


int main(){
    // ambiguity 1
    // base1 base1obj;
    // base1obj.greet(); //--->this is right 
    derived h;
    h.base1::greet();  //you have to resolve ambiguity 


    // // ambiguity 2
    // D d;
    // d.say();

    return 0;
}