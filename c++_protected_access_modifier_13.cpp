#include<iostream>
using namespace std;
class base{
    protected:   // main ek private ke jaisa variable hu jo inherit ho sakta hai
    int a;
    public:
    int b;
    base(){}
};
/*
For a protected members:
                            |public derivation      |private derivation       |protected derivation
    !. private members        not inherited           not inherited             not inherited
    2. protected members       protected               private                    protected
    3. public members          public                  private                    protected
*/
class derived: public base{
    public:
   int  go(int x){
       a=x;
       return a;
   }
};
int main(){
    derived  x;
    // x.a=43---> this is wrong because a is protected in it's contexts
    cout<<x.go(32);
    
  
    return 0;
}