#include<iostream>

                                //// true =1 , false=0
using namespace std; // or we can use this if we don't want to write std::
// int main(){
//     int a = 5;
//     int b=4;
//     float pie=3.154;
//     char c='f';
//    std ::   cout<<"Hello world \nIn this world the value of b is:"<<b<<
//    "\nthe value of a is "<<a;
//    cout<<"the value of pie is "<<pie<<endl;
//    cout<<"the value of c is "<<c<<endl;
//    cout<<"the value of a==b  is "<<(a==b)<<endl;
//    cout<<"the value of a!=b  is "<<(a!=b)<<endl;
//    cout<<"the value of a<=b  is "<<(a<=b)<<endl; // and many
//    cout<<"the value of a<=b&&a==b  is "<<(a<=b)&&(a==b)<<endl; 
//    cout<<"the value of (a<=b)||(a==b)  is "<<(a>=b)||(a==b)<<endl; 
//     return 0;
// }



// int global=6; // global variable but this program will print 5 because inside a function the 
//           // there is more precidence to local variable 
          

// void sum(){
//     cout<<global;
// }

// int main(){
//     bool a=true;
//     int global = 5;
//     global =78;
//     sum();
   
//    cout<<global;
//    cout<<"\n"<<a;

//     return 0;
// }



            // there are two types of header files 
            // 1. system header files: It comes with the compiler 
            // 2. user defined compiler :it is writte by the programmer 
  //  #include"this.h"   -> this will give an error if the header file is not in current
      // directory         
// int c=654; // global variable 
          


// int main(){
//     int  a,b,c;
//     float d=34.4f;   // here f is used for telling compiler to take this value as float here we 
//                  // have already decalred it as float but generally compiler take it as double
   //  cout<<"enter the value of a :"; // simiar to printf
//      cin>>a;                //simiar to scanf
//     cout<<"enter the value of b :"; // simiar to printf
//      cin>>b;  
//      c=a+b;              //simiar to scanf
//   cout<<"the sum of local c is: "<<c<<endl;
//   cout<<"the sum of (global c)+a is: "<<::c+a<<endl;// ::  scoop resolution operator


//     return 0;
// }



// //*******************refernce variables**********************


// int main(){
//     float var=3276.3;
//     float  &r=var; //// r is a referance variable and we have given address of r to store value of var
//                       //here r is pointing  to the var  using c++ reference variable
                        //// and if we do any change to r then value of var also changes
                        //// similarly if i change value of var then r also changes
//     cout<<r;
// }




// *****************typecasting*******************
// int main()
// {
//    int a=2;
//    const  float b=3.232;   // the value of b cannot be changed because we used cont keyword
//     cout<<(float)a<<endl;
//     cout<<float(a)<<endl;
//     cout<<(int)b<<endl;    
//     cout<<int(b)<<endl;
//     int c =int(b);

//     cout<<c<<endl;
//     cout<<"the value is:"<<a+b<<endl;
//     cout<<"the value is:"<<a+(int)b<<endl;
    
//     return 0;
// }


// ****************manipulators in C++**********
// #include<iomanip>  // we have to include this header file to use setw function
// int main()
// {
//    int a =2,b=3,c=4;
//     cout<<"the value of a without setw is:"<<a<<endl;
//     cout<<"the value of b without setw is:"<<b<<endl;
//     cout<<"the value of c without setw is:"<<c<<endl;
//     //   setw is arranged for better presentation
    
//     cout<<"the value of a without setw is:"<<setw(4)<<a<<endl;
//     cout<<"the value of b without setw is:"<<setw(4)<<b<<endl;
//     cout<<"the value of c without setw is:"<<setw(4)<<c<<endl;
    
//    return 0;
// }

// we have already done pointer ,array,structure,loops,if-else ....
// which are same in c++




// int main(){
//    enum meals{breakfast,lunch,dinner};// here enum just give numbering to the meals 
//    meals a=lunch;   // here we can use meals as a datatype also
//    cout<< (a==1);  // it will show either true or false based on which value we are comparing
  
//    return 0;
// }



// // call by refernce using pointer 
// void swap(int *a , int *b){
//    int temp=0;
//    *a=temp;
//    temp=*b;
//    *b=*a;

// }

// int main(){
//    int x=2,y=5;
//    cout<<"the value of x and y before swapping is: "<<x<<" , "<<y<<endl;
//    swap(x,y);
//    cout<<"the value of x and y after swapping is: "<<x<<" , "<<y<<endl;
   
//    return 0;
// }



// // call by refernce using c++ refernce variable 
// void swap(int &a , int &b){   // here  a and b are pointing to x and  y using c++ reference variable
//                               // and if we do any change to a and b then value of x and y also changes
//                               // and vice versa 
//    int temp=0;
//    temp=b;
//    b=a;
//    a=temp;

// }

// int main(){
//    int x=2,y=5;
//    cout<<"the value of x and y before swapping is: "<<x<<" , "<<y<<endl;
//    swap(x,y);
//    cout<<"the value of x and y after swapping is: "<<x<<" , "<<y<<endl;
   
//    return 0;
// }



// call by refernce using c++ refernce variable but here function is of return type and we are
// changing the value of a
int & swap(int &a , int &b){   // here  a and b are pointing to x and  y using c++ reference variable
                              // and if we do any change to a and b then value of x and y also changes
                              // and vice vers, here we are not returning integer rather we are returning 
                           // an variable
   int temp(0);  //new way of passing values variable(value)
   temp=b;
   b=a;
   a=temp;
   return a;
}

int main(){
   int x=2,y=5;
   cout<<"the value of x and y before swapping is: "<<x<<" , "<<y<<endl;
   swap(x,y)=765;
   cout<<"the value of x and y after swapping is: "<<x<<" , "<<y<<endl;
   
   return 0;
}