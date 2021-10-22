#include <iostream>
using namespace std;

//base class
class employee
{
public:
    int Id;
    float salary;
    employee(int empId)
    {
        Id = empId;
        salary = 562.34;
    }
    void empDisplay()
    {
        cout << "the salary of employee with Id " << Id << " is " << salary << endl;
    }
    employee() {}
};

/*
//derived class syntax
class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
{
    class members /methods/etc....
};

Note:
1. Default visibility mode is private 
2. Public visibility Mode :Public members of the base class becomes public member of derived class 
3. private visibility Mode :Public members of the base class becomes private member of derived class 

*/

//creating programmer derived class from the employee base class
class programmer : public employee
{
public:
    int languagecode;
    
    programmer(int empId, float psalary)
    {
        cout<<"***********************************"<<endl;

        cout<<"Here starts our programmer class where we are using the members such as Id,salary "
        <<"and display function of the employee class"<<endl;
        Id = empId;
        salary = psalary;
        languagecode = 9;
    }
    void getdata(){  //we here added a new member function in this programmer class
        cout<<"the Id of programmer is :"<<Id<<endl;
    }
};
int main()
{
    employee suraj(1), rohan(2);
    suraj.empDisplay();
    rohan.empDisplay();

    programmer lovey(3,44425);
    // cin>>lovey.salary;
    // cout << "the Id of the programmer is :" << lovey.Id << endl; ///we cna do  this also
    lovey.getdata(); //see we can use the member functions of the programmer class aswell as members of the 
    lovey.empDisplay(); //employee class

    cout<<"the language code of the programmer is :"<<lovey.languagecode;

    return 0;
}




