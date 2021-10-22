#include <iostream>
#include <string.h>
using namespace std;
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
     virtual void display()=0;//--> do nothing function or pure virtual function now if we will not
     // redefine the display function in the derived classes for which we are running the display function
     //then it will show error 
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
    heading = "Django tutorial";
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

