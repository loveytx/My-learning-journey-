#include<iostream>
#include<cstring>
#include <iomanip>
#include <ios>
using namespace std;
// inline int product(int a , int b)  // inline function helps the compiler to replace the return value with 
//                                 // function calling and you don't have to copy the values to the function
//                         // and waste time and memory for such an easy task(product)
// {
//     return a*b;
// }
// int main(){
//     int const x=2,y=4; // here const is used so that you can't change the vlaue of variable
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//      cout<<"the product of x  and y is :"<< product(x,y)<<endl;

//     return 0;
// }






// inline int product(int a , int b)  
// {
//     static int c=0; // this line run only one time 
//     c=c+1; // next time this function runs static variable's(c) value is retained
//                    // dont use this with inline function 

//     return a*b+c;
// }

float moneyreceived(int currentmoney, float factor = 1.04)  //here factor value(1.04) is default value
                                                 // and always create this kind of variable in end
{
    return currentmoney*factor;
}
// int main(){
//     // int x=2,y=4;
//     int money;
//     char standard[10];
//     cout<<"tell if you are vip or not"<<endl;
//     // cin>>standard;
//     gets(standard);
//     cout<<"enter the money you want to enter "<<"\n";
//     cin>>money;
//     if (strcmp(standard,"vip"))
//     {
//        cout<<"the money you will receive after one year is :"<<moneyreceived(money)<<"\n";
//     }
//     if(strcmp(standard,"not vip"))
//     {
//        cout<<"the money you will receive after one year is :"<<moneyreceived(money,1.10)<<"\n";

//     }
    
    
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     //  cout<<"the product of x  and y is :"<< product(x,y)<<endl;
//     return 0;
// }



// function over loading
//here we have given the same function name but since the number of arguments are diff
// //in each case , hence the compiler understands where we have to send the values 

// volume of cylinder 
// float volume(int r ,int h){
//     return (3.14*r*r*h);

// }

// // volume of cube
// float volume(int a){
//     return (a*a*a);

// }

// // volume of cuboid
// float volume(int l ,int b, int h){
//     return (l*b*h);

// }

// int main(){
//     cout<<"the volume of cuboid is:"<<volume(3,6,9)<<endl;
//     cout<<"the volume of cube is:"<<volume(4)<<endl;
//     cout<<"the volume of cylinder is:"<<volume(3,8)<<endl;
    
//     return 0;
// }






// C++ code to demonstrate
// the working of setiosflags() function
int main()
{

	int num = 50;

	// Using setiosflags()
	cout << "Setting showbase flag "
		<< "using setiosflags: \n"
		<< hex
		<< setiosflags(ios::showbase)
		<< num << endl;

	return 0;
}






