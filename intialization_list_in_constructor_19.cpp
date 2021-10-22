#include<iostream>
using namespace std;
/*
syntax for initializatoin list in constructor (aasani se value dene ka tereeka hai)
constructor (argumrnt list) : intialization section
{
    assignment + other code;
}

 eg:
 class Test{
     int a;
     int b;
     public:
        Test(int i, int j) : a(i), b(j){

        }
 };
*/
class Test{
    int a; //see here a is intialized first than b
    int b;
    public:
    //    Test(int i, int j) : a(i), b(a+j)//-->this will run
    //    Test(int i, int j) : a(b+i), b(j)-->this will give garbage value in 'a' because 'b' is intialized after 'a'
    //    Test(int i, int j) : a(i), b(i+j)
    //    Test(int i, int j) : a(i), b(2*j)
    //    Test(int i, int j) : b(j), a(b+i)-->this will give garbage value in 'a' because 'a' intialized first
       Test(int i, int j) : a(i)
        {
            b=j;
           cout<<"constructor intialization achieved\n";
           cout<<"Value of a is :"<<a<<"\n";
           cout<<"Value of b is :"<<b<<"\n";
        }
};
int main(){
    Test x(3,5);
    
    return 0;
}