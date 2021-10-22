#include <iostream>
#include <string.h>
#include <fstream>
//cin meaning -->enter into keyboard and ">>" it's meaning is put inside the  variable
//cout meaning -->whatever you are writing will be given to cout using '<<' and will be print on display 
/*
here fstream header file contains three major classes and we use these to read and write in the files---
1. fstreambase 
2. ifstream -->derived from fstreambase class
3. ofstream -->derived from fstreambase class

In order to work with files in c++, you will have to open it, primarily, there are two ways to opne:-
1. Using the constructor. 
2. Using the member function open() of the class.
*/
using namespace std;

int main()
{
    // read operation
    //opening file using constructor
       ifstream lin("sample1.txt");
       string st;
       getline(lin,st); //here lin is just the name of variable and it's not any function,we are sending the data
               //lin to st just like we use cin where we give data from keyboard and it stores in variable
       cout<<"The content of this file is : "<<st;


    // //write operation.
    // connecting our file with lout stream.
    ofstream lout("sample2.txt"); //here we don't have to create any file it wil sutomatically create any file
                                 //and write into it also out is just a variable name not any function
    string name;
    cout << "Enter your name\n";
    // cin >> name; //---> this will only print one name without any spaces that's why we use getline 
                    //or we can use gets but we would have to use char rather than string
    getline(cin,name) ;//this(getline) is used for entering a whole line with space
    lout << "my name is "<< name; //writing a string to the file

    lout.close(); //iska matlab ye stream band ho gayi and ab me iske sath kaam nhi kr rha hu & file ke 
    // // sath link toot gya

    return 0;
}



// // reading a text file
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main () {
//   string line;
//   ifstream myfile ("sample1.txt");
//   if (myfile.is_open())
//   {
//     while ( getline (myfile,line) )
//     {
//       //use line here
//     }
//     myfile.close();
//   }

//   else cout << "Unable to open file"; 

//   return 0;
// }




// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
    
//     ifstream in("sample1.txt");
//     stringstream sstr;
//     while(in >> sstr.rdbuf());
//     cout << sstr.str() << endl;



//     return 0;
// }
