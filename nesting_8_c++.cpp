#include <iostream>
#include <string>
using namespace std;
// nesting of member functions // we can nest one function into another so that we can also 
// make it private and user can't excess by calling that function in the main
//but that function will run in background under the function where it is called 
//(in this eg. function is called under ones function)without calling
// we can call one function using other function without using . operator

class binary
{
private:
    string s; // here we don't have to declare 's' private because every variable is
              // in class  and also we declare this varisble as string then it will have diff
              //pre defined function then character array
    void chk_bin(void); // here we declared it in private so nobody can excess it from outside

public:
    void read(void);  
    void ones(void);// here this function can excess private variables and functions also
};

void binary::read(void)
{
    cout << "enter the string :" << endl;
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // s.at give individual value
        {
            cout << "invalid binary format" << endl;
            exit(0); // it will exit the whole program
        }
    }
}
void binary::ones(void)  // 1's compliment of s
{ 
    chk_bin(); // we nested it here and it will run when we call ones func in main
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0') // s.at give individual value
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "\nThe 1's compliment of num is :" << s; // in cout and cin function we dont have to specify
                                                     // format like we do in printf and scanf eg. %d,%c....
    //   for (int  i = 0; i < s.length(); i++){
    //       cout<<s[i];   // here we can use s.at(i) also
    //   }
}

    int main() // program starts from here
    {
        binary num;
        num.read();
        // num.chk_bin(); // we can not excess it from here because it is declared in private tab
                       //// it will help us in various department where we have to make data private 
                       ////so that no one can excess it 
        num.ones();

        return 0;
    }