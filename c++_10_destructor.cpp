#include<iostream>
using namespace std;

//use--->jab ek bade program me kisi object ko delete krna hota hai to hum chahte hai ki jo bhi memory usse dynamically 
//allocate hui thi, wo free ho jaye, iss liye destructor banate hai.
//destructor never takes an argument ,nor it returns any value.
int count=0;
class num{
   
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is for object number :"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when destructor is for object number :"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"here my main function is started"<<endl;
    cout<<"Creating my first object n1 "<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating my second and third object "<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    } //block ke exit hone pr n2 and n3 ka kaam khatam isliye wo apne aap distroy ho jayenge
    //koi obj bana aur aage compiler ko pata chala ab iska kaam nahi hai to wo usse destruct kr dega 
    cout<<"back to main"<<endl;
    return 0;
}