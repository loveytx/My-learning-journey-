#include <iostream>
using namespace std;

/*syntex of multiple inheritance 
   class derived :viibility mode base1, visibility mode base2
   {
       body of derived class
   }*/



class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class derived : public base1, public  base2
{
    int sumbase;
    public:
    void show(){
        sumbase =base1int+base2int;
        cout <<"the value of base1 is :"<<base1int<<endl;
        cout <<"the value of base2 is :"<<base2int<<endl;
        cout <<"the sum of base1 and base2  is :"<<sumbase<<endl;

    }
};
//derived class will inherit the base1int and base2int as protected in it's class 
int main()
{
    derived lovey;
    lovey.set_base1int(32);
    lovey.set_base2int(42);
    lovey.show();

    return 0;
}