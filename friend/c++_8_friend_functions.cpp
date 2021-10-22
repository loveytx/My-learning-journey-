#include <iostream>
using namespace std;
//class told the compiler that sumcomplex function is it's friend using the friend keyword
// A friend function is a function that is not a member of a class but has access to the
//class's private variables and functions
// class complex
// {
//     int a;
//     int b;

// public:
//     void setnumber(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     //below line means that non member function --sumcomplex function is allowed to do anything 
//     //with my private parts(data)
//     friend complex sumcomplex(complex s1, complex s2);
//     void printnumber(void)
//     {
//         cout << "the value of complex number is " << a << "+i" << b << endl;
//     }
// };
// //note an imp thing here , sumcomplex has only been granted the private data of the class but
// //it hasn't became the member of class since we didn't declared it as member ,perhaps we have
// //declared it as friend of the class ,it is just a normal function that we use
// complex sumcomplex(complex s1, complex s2)
// {
//     complex result;
//     result.setnumber((s1.a + s2.a), (s1.b + s2.b));
//     return result;
// }
// int main()
// {
//     complex c1, c2, sum;
//     c1.setnumber(1, 3);
//     c1.printnumber();

//     c2.setnumber(4, 7);
//     c2.printnumber();

//     //sum.sumcomplex(c1, c2)---> we can't do this because this function isn't
//     //member of class ,it's just a normal function
//     sum = sumcomplex(c1, c2);
//     sum.printnumber();

//     return 0;
// }


 

/*properties of friend functions
1. not in the scope of the class
2. since it is not in the scope of the class, it cannot be called from the objet of that class,
c1.sumcomplex()==invalid
3. can be invoked without the help of any object 
4. usually contains the objects as arguments 
5. can be declared inside public or private section of the class
6. it can not access the members directly by their names and need object_name.member_name
to access any member 
*/




//forward declaration because when complier starts compiling then he should know that there is 
// a class named complex which we are using in calculator that's why we declared it first
class complex;

class calculator{
    public:
    //  int add(int a,int b){ // simple funtion not related to friend
    //      return (a+b);
    //   }
      int sumRealcomplex(complex s1 ,complex s2);
      int sumCompcomplex(complex s1 ,complex s2);
};

class complex
{
    int a;
    int b;

public:
    // friend int calculator :: sumRealcomplex(complex s1 ,complex s2);
    //here only a specific function got access to the private data of class complex
    //if we want all funnction and variable to get access of private data of complex 
    //then we will declare it like this --> see down
    //declaring the entire claculator class as friend
    friend class calculator;
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber(void)
    {
        cout << "the value of complex number is " << a << "+i" << b << endl;
    }
}; 


int calculator:: sumRealcomplex(complex s1,complex s2){
          return (s1.a + s2.a);
      }

int calculator:: sumCompcomplex(complex s1,complex s2){
          return (s1.b + s2.b);
      }


int main(){
    int sum1,sum2,sum3;
    complex c1,c2;
    calculator c;
    // sum3 = c.add(2,3);
    // cout<<"the sum of the number is :"<<sum<<endl;
    c1.setnumber(1,5);
    c1.printnumber();
    c2.setnumber(6,7);
    c2.printnumber();
   sum1 = c.sumRealcomplex(c1,c2);
   sum2 = c.sumCompcomplex(c1,c2);
   cout<<"the sum of real part of two complex num is :"<<sum1<<endl;
   cout<<"the sum of complex part of two complex num is :"<<sum2<<endl;
    return 0;
}