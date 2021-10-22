#include<iostream>
using namespace std;
/*
tmpelate<class T1, class T2, int max>
class nameofCLass{              ^
    //body                      |
}                               |
                                |
We can also pass non-type arguments to templates. Non-type parameters are mainly used for specifying max  
or min values or any other constant value for a particular instance of template.
*/
template<class T1, class T2>

class myclass{
    public:
       T1 data1;
       T2 data2;
       myclass(T1 a,T2 b): data1(a),data2(b){}
       void display(){
           cout<<this->data1<<" "<< this->data2<<endl;
       }
};
int main(){
    myclass<char,double>obj('C',3524.222 );//we can mention any datatype here and even mention custom 
    obj.display();  //datatype(other classes made by us )
    
    return 0;
}