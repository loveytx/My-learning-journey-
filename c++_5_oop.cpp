#include <iostream>
using namespace std;

class employee
    { // similar to structure but it has privacy since we can use
        //private keyword

    private:
        int a, b, c;
    public:
        int d, e;


        void setdata(int a1, int b1, int c1); // declaration
        void getdata()
        {
            cout << "the value of a is :" << a << endl;
            cout << "the value of b is :" << b << endl;
            cout << "the value of c is :" << c << endl;
            cout << "the value of d is :" << d << endl;
            cout << "the value of e is :" << e << endl;
        }
    };

void employee::setdata(int a1, int b1, int c1) // :: is scope resolution operator
                                               // and since setdata function is declared under employe
                                               //we have to use employe and ::
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee lovey;
    // lovey.a=245;   //this will show error because a is declared in privte tab and
    //only function declared in the class can access it (int this
    // it is setdata and gatdata)
    lovey.d = 245;
    lovey.e = 354;
    lovey.setdata(1, 3, 5);
    lovey.getdata();
    return 0;
}