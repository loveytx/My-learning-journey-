#include <iostream>
#include <string.h>
using namespace std;

//abstract base class-->ye base class baanayi hi isliye gayi hai taaki ye khud kabhi run na ho ye sirf dusri 
//classes ke use ke liye banayi gayi hai iske objects nhi baneyenge 
class CWH
{
protected:
    string title;
    float rating;
public:
    CWH(string s, float r)
    {
        title= s;
        rating = r;
    }
    CWH(){}
     virtual void display(){}//->this is virtually behind so compiler will run the display function of the 
    //derived class whose object the pointer is pointing to and this thing will decide at run time by the
     // compiler that's why it's example of run time polymorphism and ye function kabhi khud run nhi hoga
};


class CWHVideo : public CWH
{
    float VideoLength;
public:
    CWHVideo(string s , float r ,float vL) : CWH(s,r){
        VideoLength = vL;
    }
     void display()
    {
        cout<<"this is an amazing video with title  :"<<title<<endl;
        cout<<"Ratings "<<rating<<" out of 5 stars"<<endl;
        cout<<"the length of video is : "<<VideoLength<<endl;
    }
};
class CWHText : public CWH
{
    int Words;

public:
    CWHText(string s , float r ,int w) : CWH(s,r){
       Words = w;
    }
     void display()
    {
        cout<<"this is an amazing video with title  :"<<title<<endl;
        cout<<"Rating of the text tutorial is : "<<rating<<" out of 5 stars"<<endl;
        cout<<"the wordlength is  :"<<Words<<endl;
    }
};
int main()
{
    string heading;
    float rating;
    float vLength;
    int wordlenth;
    
    //for video
    heading = "Django tutorial Video";
    rating = 4.8;
    vLength = 5.6;
    CWHVideo djvideo(heading,rating,vLength);
    // djvideo.display();


    //for text
    heading = "Django tutorial Text";
    rating = 4.66;
    wordlenth=90;
    CWHText djtext(heading,rating,wordlenth);
    // djtext.display();


    //running the program using pointer 
    CWH *ptr[2];  //here the pointer is of base class (i.e CWH) but still it's running the display function of 
              // CWHText (derived class) it's because we declared the display function in base class as virtual
    ptr[0] = &djvideo;
    ptr[1] = &djtext;
    ptr[0]->display();
    ptr[1]->display();

    
    return 0;
}



/*
   Rules for virtual functions-
1. They cannot be static.
2. They are accessed by object pointer.
3. Virtual Functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class then there is no neccessity of redefining it in 
base class.(i.e if compiler doesn't find the derived class display function then it will run the 
base class virtual function ---ek tarah se virtual matlab 2nd option --behind the scenes rahega )
*/