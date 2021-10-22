#include <iostream>
// due to static variable , har object ka apna count nhi hota
// //and every object share the same count ,//static variable class se jud jata hai and that's why
// //they are also known as class variables
using namespace std;
// class employee{
//     int Id;

//     static int count;  // count by defaut initialze from zero &we can't give any value here
//                //static variables only initializes one time and when the next object is used
//                   //the value during precious iteration is saved and we can count the no. of
//                   //employees easily which was difficult to do without static variable
// public:
// void setdata(void){
//     cout<<"enter the ID of the employee"<<endl;
//     cin>>Id;
//     count++;
// }
// void getdata(void){
//     cout<<"the ID of employee no."<<count<<" is "<<Id<<endl;
// }
// };
// int employee::count; //we must have to define it outside the class always
//                     //we can change the value of count here
// int main(){
//     employee suresh,rohan,lovey;
//     suresh.setdata();
//     suresh.getdata();

//     rohan.setdata();
//     rohan.getdata();

//     lovey.setdata();
//     lovey.getdata();
//     return 0;
// }

//static function->> it is a function that can excess every static member in that
//function, static function sirf class se bhi run ho jata hai, kisi object ki zaroorat
// nahi padti

class employee
{
    int Id;

    static int count;

public:
    void setdata(void)
    {
        cout << "enter the ID of the employee" << endl;
        cin >> Id;
        count++;
    }
    void getdata(void)
    {
        cout << "the ID of employee no." << count << " is " << Id << endl;
    }
    static void getCount(void){  //static member function can excess only other static 
      //function or variables not the other the variables which means i can't print the value 
      //of id in this function but static variable can be used in any function defined under 
      //the class
    //   cout<<Id;-->will give error
        cout<<"the value of count is "<<count<<endl;
    }
};
int employee::count; //we must have to define it outside the class always
                     //we can change the value of count here
int main()
{
    employee suresh, lovey;
    suresh.setdata();
    suresh.getdata();
    suresh.getCount(); 

    lovey.setdata();
    lovey.getdata();
    employee::getCount(); //we called this static function using class only and

                      //we called this static function using class only and
                    //without using any object
    return 0;
}
