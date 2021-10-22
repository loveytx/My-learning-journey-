#include<iostream>
#include<string.h>
using namespace std;
// // this will print hello just be creating the obj of derived class
// class chal{
//     public:
//     chal(){
//         cout<<"hello";
//     }
// };
// class derive: public chal{
   
// };
// int main(){
//     derive a;  
//     return 0;
// }

/*
1. if there are no arguments in base class constructor then we dont have to create 
class constructor  but 
2. if it has arguments then we need to create the derived class 
constructor
3. if both base and derived class has constructor then base constructor will run first 

*/


/*
Case1 :
class B : public A{
   // order of execution is --> first A() then B()
};

Case2 :
class A : public B,public C{
   // order of execution is --> first B() then C() then A()
};

Case3 :
class A : public B, virual public C{
   // order of execution is --> first C() then B() then A()
};
*/

class Base1 {
    int data1 ;
    public:
      Base1(int i) : data1(i) {   //intialization list
        //   data1 = i;
          cout<<"Base1 class constructor is called \n";
      }
      void display(){
          cout<<"the value of data1 is :"<<data1<<endl;
      }
      Base1(){}
};


class Base2 {
    int data2 ;
    public:
      Base2(int i){
          data2 = i;
          cout<<"Base2 class constructor is called \n";
      }
      void display(){
          cout<<"the value of data2 is :"<<data2<<endl;
      }
      Base2(){}
};


class derived :public Base1 , virtual public Base2 { //yaha pr jo order hai uske hisab se decide hoga kaun sa
                                         //constructor pehle run hoga but agar virtual hoga to wo hamesha 
                                         //pehle run hoga 
    int derived1,derived2;
    public:
      derived(int a,int b, int c, int d ): Base1(a),Base2(b){  //special tareeke se value dena
          this->derived1 = c;  //this ek pointer hai jo uss object ko point krega and iske  likhne se koi 
                                //  faarq nhi padega
          derived2 = d;
          cout<<"derived class constructor is called \n";
      }

      void display(){
          cout<<"the value of derived1  is :"<<derived1<<endl;
          cout<<"the value of derived2  is :"<<derived2<<endl;
      }
      
};



int main(){
    derived lovey(4,3,34,76); //see we only have to create one object to intialize every constructor
    lovey.Base1::display(); //here we are telling the compiler to run the display of Base1 
    lovey.Base2::display();
    lovey.display();
    
    return 0;
}