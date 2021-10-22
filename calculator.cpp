

#include <iostream>
#include <cmath>

using namespace std;
void add();
void sub();
void mul();
void div();


int main()
{

    cout << "enter the function you want to perform\n";
    cout << "1 for addition" << endl;
    cout << "2 for subtraction" << endl;
    cout << "3 for multiplication" << endl;
    cout << "4 for division" << endl;
    cout << "5 for power" << endl;
    cout << "6 for sin" << endl;
    cout << "7 for cos" << endl;
    cout << "8 for tan" << endl;
    cout << "9 for log" << endl;
    cout << "10 for antilog" << endl;
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        add();

        break;
    case 2:
        sub();
        break;

    case 3:
        mul();

        break;

    case 4:
        div();
        break;
    case 5:
        float num1, x;
        cout << "enter the num :";
        cin >> num1;
        cout << "enter the power :";
        cin >> x;
        cout << pow(num1, x);
        break;
    case 6:
        float num2;
        cout << "enter the num :";
        cin >> num2;
        cout << sin(num2);
        break;
    case 7:
        float num3;
        cout << "enter the num :";
        cin >> num3;
        cout << cos(num3);
        break;
    case 8:
        float num4;
        cout << "enter the num :";
        cin >> num4;
        cout << tan(num4);
        break;

    case 9:
        float num5;
        cout << "enter the num :";
        cin >> num5;
        cout << log(num5);
        break;
    case 10:
        float num6;
        cout << "enter the num :";
        cin >> num6;
        cout << pow(2.718281828,num6);
        break;
    default:
        cout << "you did't choose any option\n";
        break;
    }
    return 0;
}

void add()
{
    float num1, num2;

    cout << "enter the two numbers \n";
    cin >> num1 >> num2;
    cout << num1 + num2;
}
void sub()
{
    float num1, num2;

    cout << "enter the two numbers \n";
    cin >> num1 >> num2;
    cout << num1 - num2;
}
void mul()
{
    float num1, num2;

    cout << "enter the two numbers \n";
    cin >> num1 >> num2;
    cout << num1 * num2;
}
void div()
{
    float num1, num2;

    cout << "enter the two numbers \n";
    cin >> num1 >> num2;
    cout << num1 / num2;
}
