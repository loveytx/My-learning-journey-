#include <iostream>
#include <cmath>
//consructor -->complex class ke andar ussi naam ka function banana taaki values easily pass kr sake
using namespace std;
// class complex{
//     int a;
//     int b;
//     public:
//     //creating a constructor
//     //constructor is a special member function with same name as of the class.
//     //it is used to initialise the objects of the class
//     //it is automatically invoked whenever the object is created

//     complex(void); //  constructor declaration
//     void print(void){
//         cout<<"the complex number is "<<a<<"+i"<<b<<endl;
//     }
// };

// complex::complex(void){// ---> this is a default constructor since it accepts no parameter
//and run automatically behind the scene when we make object
//                      // constructor ki koi return type nhi banate
//                      //here hello will print automatically when we make an object
//      a=10;
//      b=43;
//      cout<<"hello\n";
// }
// int main(){
//     complex c1,c2,c3;
//     c1.print();
//     c2.print();
//     // c3.print();

//     return 0;
// }
/* properties of constructors 
1. it should be declared  in publis section of class 
2. they are automatically invoked whenever the object is created
3. They can return values but do no have return types
4. It can have default arguments
5. we can not refer to their address
*/




// class complex{
//     int a;
//     int b;
//     public:

//     complex(int ,int ); //  constructor declaration
//     void print(void){
//         cout<<"the complex number is "<<a<<"+i"<<b<<endl;
//     }
// };

// complex::complex(int x, int y){ //this is parameterized constructoras it takes 2 parameters
//                          //matlab hum values de sakte hai
//      a=x;
//      b=y;
//     //  cout<<"hello\n";
// }

// int main(){
//     //ways to pass values from user:
//  //   1.implicit call
//     complex a(3,4);
//     a.print();

// //    2.explicit call
//    complex b = complex(3,4);
//     b.print();

//     return 0;
// }





// //example of parametrized constructor
// //funtion that takes two points and computes the distance between them

// class point
// {
//     int x, y;

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void displayPoint(void)
//     {
//         cout << "the point you entered is (" << x << "," << y << ")" << endl;
//     }
//     friend void distance(point s1, point s2);
// };
// void distance(point s1, point s2)
// {
//     double result = sqrt((s1.x - s2.x) * (s1.x - s2.x) + (s1.y - s2.y) * (s1.y - s2.y));
//     cout << "the distance between two points is " << result;
// }

// int main()
// {
//     point a(2, 3);
//     a.displayPoint();

//     point b(5, 6);
//     b.displayPoint();

//     distance(a, b);

//     return 0;
// }





// //constructors overloading -->ek hi name ke different function banana jinke parameter
// //me diff ho
// //we can have multiple constructor but which one will run depends on the arguments
// class complex{
//     int a,b;
//     public:
//     complex(int x, int y){
//         a = x;
//         b = y;
//     }
//     complex(){
//         a = 0;
//         b = 0;
//     }
//     complex(int x ){
//       cout<<"hello\n";
//       a=x;
//       b=0;
//     }
//        void printnumber(void)
//     {
//         cout << "the value of complex number is " << a << "+i" << b << endl;
//     }
// };
// int main(){
//     complex c1(2,4);
//     c1.printnumber();
//     complex c2(7);
//     c2.printnumber();

//     complex c3;
//     c3.printnumber();
//     return 0;
// }

//default arguments in constructors

// class simple{
//     int a,b,c;
//     public:
//     simple(int x, int y=4, int z=77){
//         a=x;
//         b=y;
//         c=z;
//     }
//     void printData(){
//         cout<<"the value of a,b and c is "<<a<<","<<b<<" and "<<c<<endl;
//     }
// };

// int main(){
//     simple s(1); //if we give the value of b also then that value will be printed
//     s.printData();
//     return 0;
// }





// // dynamic intialization of objects using constructors
// class BankDeposit
// {
//     int principal;
//     int years;
//     float interest;
//     float returnValue;

// public:
//     BankDeposit() {}////if you comment this out then ,this program will show error since compiler will 
//                    //get confused sice u created 3 objects and compiler will think which constructor to run
//                    ////but you will not get error if you create 2 objects only beause it will check no. of 
//                    ////agruments of the function but if you made a variable and there is no constructor matching
//                    //with the number of arguments then it will show error 
//     BankDeposit(int p, int y, float r); //r can be value like 0.03
//     BankDeposit(int p, int y, int r);
//     ~BankDeposit(){
//          cout<<"chak be nikal"<<endl;
//      }   //r can be value like 20
//     void show();
// };

// BankDeposit::BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interest = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interest);
//     }
// }

// //jab tu interest ki int value dega to compiler ye wala constructor run krega
// BankDeposit::BankDeposit(int p, int y, int r)
// {

//     principal = p;
//     interest = float(r) / 100;
//     years = y;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interest);
//     }
// }
// void BankDeposit::show()
// {
//     cout << "The value of your principal " << principal << " after " << years << " years is " << returnValue << endl;
// }
// int main()
// {
//     BankDeposit b1,b2,b3;
//     int p, y, R;
//     float r;

//     cout << "enter the value of principal,years and interest rate." << endl;
//     cin >> p>>y>>r;
//     b1 = BankDeposit(p,y,r); //iske baad distructor call hoga because b1 ka khatam hoga
//     b1.show();

//     cout << "enter the value of principal,years and interest rate." << endl;
//     cin >> p>>y>>R;
//     b2 = BankDeposit(p,y,R);//iske baad distructor call hoga because b2 ka khatam hoga
//     b2.show();
//     //ab tino ka kaam khatam ho jayega iss liye teen baar likha hua ayega

//     return 0;
// }





//copy constructor--->make copy of the object
//agar aise obejct banayega jo koi value pass nahi krte then you also have to make the constructor
// which takes no parameter

class number{
    int a;
    public:
    number(){
        a=0;
    }

    number(int num){
        a=num;
    }
    ~number(){ //destructor
        cout<<"khatam tata bye bye udd gya!!"<<endl;
    }
// for interview--->when no copy condtructor is found then compiler supplies it's own copy constructor 
    number(number &obj){ // it will not show error even if it's commented out because z1 is sending one argument
                          //and above constructor will run
        cout<<"Copy constructor is called !!!"<<endl;
      a=obj.a;
    }

    void display(){
        cout<<"the number is :"<<a<<endl;
    }
};

int main(){
    number x,y,z(54),z2;
    x.display();
    y.display();
    z.display();
    number z1(z); // copy constructor is invoked
    z1.display();

    z2 = z;//copy constructor is not invoked because humne already ek bane hue obj(z2) ko assign kr di z ki value 
    z2.display();

    number z3 = z;// copy constructor is invoked bacause humne yaha par banaya hai
    // z1 should exactly resemble z or x or y

    
    return 0;
}