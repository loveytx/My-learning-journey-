// #include <iostream>
// #include <cmath>
// using namespace std;
// class SimpleCalculator
// {
// protected:
//     float a1, b1, result1;

// public:
//     // SimpleCalculator(){-->it will run without calling
//     //     cout <<"hello" << endl;
     
//     // }
//     void setvalue1(float x, float y)
//     {
//         a1 = x;
//         b1 = y;
//     }
//     void calci()
//     {
//         cout << "choose any operator (+,-,*,/) " << endl;
//         char c;
//         cin >> c;
//         switch (c)
//         {
//         case '+':
//             result1 = a1 + b1;
//             break;
//         case '-':
//             result1 = a1 - b1;
//             break;
//         case '*':
//             result1 = a1 * b1;
//             break;
//         case '/':
//             result1 = a1 / b1;
//             break;
//         default:
//             cout << "you didn't choose any option !" << endl;

//             break;
//         }
//     }
//     void display1(void)
//     {
//         cout << "the value of result1 is :" << result1 << endl;
//     }
// };
// class ScientificCalculator
// {
// protected:
//     float a2, result2;

// public:
//     ScientificCalculator(){}
//     void setvalue2(float x)
//     {
//         a2 = x;
//     }
//     void sciCalci()
//     {
//         cout << "enter the function you want to perform\n";
//         cout << "1 for sin" << endl;
//         cout << "2 for cos" << endl;
//         cout << "3 for tan" << endl;
//         cout << "4 for log" << endl;
//         int n;
//         cin >> n;
//         switch (n)
//         {
//         case 1:
//             result2 = sin(a2);

//             break;
//         case 2:
//             result2 = cos(a2);

//             break;
//         case 3:
//             result2 = tan(a2);

//             break;
//         case 4:
//             result2 = log(a2);

//             break;

//         default:
//             break;
//         }
//     }
//     void display2(void)
//     {
//         cout << "the value of result2 is :" << result2 << endl;
//     }
// };
// class HybridCalculator : public SimpleCalculator, public ScientificCalculator
// {

//     // HybridCalculator(){}
//     // HybridCalculator(float x, float y):SimpleCalculator(a1,b1){};
//     // HybridCalculator(float x):ScientificCalculator(a2){};
// };
// int main()
// {
//     HybridCalculator z;

//     int num1, num2;
//     cout << "enter the value of numbers num1 and num2 for simple calculation\n";
//     cin >> num1 >> num2;

//     z.setvalue1(num1, num2);
//     z.calci();
//     z.display1();

//     int num;

//     cout << "enter the value of num for scientfic calculation\n";
//     cin >> num;
//     z.setvalue2(num);
//     z.sciCalci();
//     z.display2();
//     return 0;
// }









#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
class SimpleCalculator
{
protected:
    float a1, b1, result1;

public:
    SimpleCalculator(){}
    SimpleCalculator(float x, float y)
    {
        a1 = x;
        b1 = y;
    }
    void calci()
    {
        cout << "choose any operator (+,-,*,/) " << endl;
        char c;
        cin >> c;
        switch (c)
        {
        case '+':
            result1 = a1 + b1;
            break;
        case '-':
            result1 = a1 - b1;
            break;
        case '*':
            result1 = a1 * b1;
            break;
        case '/':
            result1 = a1 / b1;
            break;
        default:
            cout << "you didn't choose any option !" << endl;

            break;
        }
    }
    void display1(void)
    {
        cout << "the value of result1 is :" << result1 << endl;
    }
};
class ScientificCalculator
{
protected:
    float a2, result2;

public:
    ScientificCalculator(){}
    ScientificCalculator(float x)
    {
        a2 = x;
    }
    void sciCalci()
    {
        cout << "enter the function you want to perform\n";
        cout << "1 for sin" << endl;
        cout << "2 for cos" << endl;
        cout << "3 for tan" << endl;
        cout << "4 for log" << endl;
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            result2 = sin(a2);

            break;
        case 2:
            result2 = cos(a2);

            break;
        case 3:
            result2 = tan(a2);

            break;
        case 4:
            result2 = log(a2);

            break;

        default:
            break;
        }
    }
    void display2(void)
    {
        cout << "the value of result2 is :" << result2 << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
   public:

    HybridCalculator(float x,float y, float z):SimpleCalculator(x,y),ScientificCalculator(z){}
};
int main()
{
    HybridCalculator z(2,3,4);
    z.calci();
    z.display1();

    z.sciCalci();
    z.display2();
    return 0;
}