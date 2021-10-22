#include <iostream>
using namespace std;



// class employee
// {
// private:
//     int Id;
//     int salary;
//     char Name[20];
//     static int counter;

// public:
//     static void initCounter(void) { counter = 0; }
  
// void setInfo(void)
// {

//     cout << "enter the Name of the employee no." << counter + 1 << endl;
//     cin >> Name;
//     cout << "enter the ID of the employee  no.:" << counter + 1 << endl;
//     cin >> Id;
//     cout << "enter the salary of the employee no.:" << counter + 1 << endl;
//     cin >> salary;
//     counter++;
// }
// void displayInfo(void)
// {

//     cout << "the salary of employee with Id no." << Id << " and with name " << Name << " is " << salary << endl;
// }
// };
// int employee::counter;

// int main()
// {
//     employee e[5];
//     for (int i = 0; i < 3; i++)
//     {
//         // e[i].initCounter();
//         employee::initCounter();
//         e[i].setInfo();
//         e[i].displayInfo();
//     }
//     return 0;
// }





class employee
{

    int Id;
    int salary;
    char Name[20];
    static int counter;

public:
    static void initCounter(void) { counter = 0; }
    void setInfo(void);
    void displayInfo(void);
};
int employee::counter;
void employee::setInfo(void)
{

    cout << "enter the Name of the employee no." << employee::counter + 1 << endl;
    cin >> Name;
    cout << "enter the ID of the employee  no.:" << employee::counter + 1 << endl;
    cin >> Id;
    cout << "enter the salary of the employee no.:" << employee::counter + 1 << endl;
    cin >> salary;
    employee::counter++;
}
void employee::displayInfo(void)
{

    cout << "the salary of employee with Id no." << Id << " and with name " << Name << " is " << salary << endl;
}

int main()
{
    employee e[5];
    for (int i = 0; i < 3; i++)
    {
        // e[i].initCounter();
        employee::initCounter();
        e[i].setInfo();
        e[i].displayInfo();
    }
    return 0;
}
