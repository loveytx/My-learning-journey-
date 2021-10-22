#include<iostream>
using namespace std;
//here compiler binds the function at the run time and decides which display function will run at run time 
//which is known as run time polymorphism

class Baseclass {
    public :
    int var_base;
    void display(){
        cout<<"displaying the base class variable var_base "<<var_base<<endl;
    }


};
class Derivedclass : public Baseclass {
    public :
    int var_derived;
    void display(){
        cout<<"displaying the base class variable var_base "<<var_base<<endl;
        cout<<"displaying the derived class variable var_derived "<<var_derived<<endl;
    }

};

int main(){
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer ->var_base =65;
    // base_class_pointer ->var_derived =65;-->this will show error 
    base_class_pointer->display();  //it will run the display function of base class because pointer is of 
                        //Baseclass type and this pointer can't run the member functions of derived class
                        //but vice versa i.e derived class pointer pointing to the derived class obj can 
                        //run functions of both base and derived class
    Derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    // derived_class_pointer = &obj_base;-->this will show error 
    derived_class_pointer->var_base=6;
    derived_class_pointer->var_derived=86;
    derived_class_pointer->display();
    return 0;
}