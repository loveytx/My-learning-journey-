#include<iostream>
#include <string.h>
#include <fstream>


using namespace std;
int main(){
    ofstream out;
    out.open("sample1.txt");
    out<<"hello i'm here\n";
    out<<"This is my program\n";
    out.close();
    
    ifstream in;
    string st;
    int i=0;
    in.open("sample1.txt");
    // getline(in,s);
    // in>>st>>st2; //we can read different words using this but we can do this using loops
    // cout<<s<<s2;
    while (in.eof()==0) //used to read all the content of file, when the eof function returns 1 it means the 
                       //condi is now false and loop will stop 
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();

    
    return 0;
}