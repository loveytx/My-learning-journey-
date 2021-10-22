#include <iostream>
using namespace std;

// class base
// {
//     int data1; // private by default and not inheritable by any other class
// public:
//     int data2;
//     void setdata();
//     int  getData1();
//     int  getData2();
//     base(){}
// };

// void base::setdata()
// {
//     data1 = 10;
//     data2 = 20;
// }

// int base ::getData1()
// {
//     return data1;
// }

// int base ::getData2()
// {
//     return data2;
// }

// class derived : public base
// { // class is being derived publically
//     int data3;

// public:
//     void process();
//     void display();

// };
// void derived :: process(void){
//     data3 = data2 * getData1(); //we are writing data1 using getData1 because we can't inherit 
//                                // the private data

// }
// void derived ::display(){
//    cout<<"the value of data1 is :"<< getData1()<<"\n";
//    cout<<"the value of data2 after changing is "<< data2<<"\n";
//     cout<<"the value of data3 is :"<<data3<<endl;
// }

// int main()
// {
//     base x;
//     // x.setdata();  ////here we used our base class 
// //    cout<< x.getData1()<<"\n";
// //    cout<< x.getData2()<<"\n";


// ////here we using functions of base class using derived class
//    derived y;      
//    y.setdata();  //we can do this because setdata have the access of data1
// //    cout<<y.getData1()<<"\n";
//     // y.data1 =736; ---> this is wrong because i can't access the private data directly tho 
//                      //we can print it using other member functions defined in that class
//    y.data2 =645;
   


//    //here we used members functions defined under derived class
//    y.process();
//    y.display();
//     return 0;
// }





//class derived here privately
class base
{
    int data1; // private by default and not inheritable by any other class
public:
    int data2;
    void setdata();
    int  getData1();
    int  getData2();
    base(){}
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

class derived : private base
{ 
    int data3;

public:
    void process();
    void display();

};
void derived :: process(void){
    setdata();
    data3 = data2 * getData1();
}
void derived ::display(){
   cout<<"the value of data1 is :"<< getData1()<<"\n";
   cout<<"the value of data2 after changing is "<< data2<<"\n";
   cout<<"the value of data3 is :"<<data3<<endl;
}

int main()
{  
   derived y;      
//    y.setdata()---> this will show error because setada is private for derived class
   y.process();
   y.display();
    return 0;
}