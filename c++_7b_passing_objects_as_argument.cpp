#include <iostream>
using namespace std;
// class complex
// {
//     int a ;
//     int b ;

// public:
//     void setdata(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void getdata(complex s1, complex s2)
//     {
//         a = s1.a + s2.a;
//         b = s1.b + s2.b;
//     }
//     void printdata(void)
//     {
//         cout << "the value of complex number is " << a << "+" << b << "i" << endl;
//     }
// };
// int main()
// {
//     complex c1, c2,c3;
//     c1.setdata(2, 3);
//     c1.printdata();

//     c2.setdata(4, 6);
//     c2.printdata();

//     c3.getdata(c1, c2);
//     c3.printdata();
//     return 0;
// }




// //operator overloading
// class complex
// {
//     int a ;
//     int b ;

// public:
//     void setdata(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     complex  operator +( complex s2)
//     {
//         complex temp;
//         temp.a = a + s2.a;
//         temp.b = b + s2.b;
//         return temp;
//     }
//     complex operator -(void){
//         complex temp;
//         temp.a= -a;
//         temp.b= -b;
//         return temp;
//     }
//     void printdata(void)
//     {
//         cout << "the value of complex number is " << a << "+" << b << "i" << endl;
//     }
// };
// int main()
// {
//     complex c1, c2,c3;
//     c1.setdata(2, 3);
//     c1.printdata();

//     c2.setdata(4, 6);
//     c2.printdata();

//     c3 = c1 + c2;
//     c3.printdata();

//     complex c4 = -c3; //unary operator overloading since no object is in argument
//     c4.printdata();
//     return 0;
// }




// class integer{
//     int x;
//     public:
//       void setData(int a){
//           x=a;
//       }

//       integer operator ++(void){  //pre increment
//           integer  i;
//           i.x =++x;
//           return i;
//       }
//       integer operator ++(int){  //post increment , int has no work, we only writing so that
//                                 // compiler can understand that this is post increment
//           integer  i;
//           i.x =x++;
//           return i;
//       }

//       void showData(void ){
//           cout<<x<<"\n";
//       }
// };
// int main(){
//     integer i1,i2;
//     i1.setData(3);

//     i2 = i1++;  //i2 = i1.operator++();
//     i1.showData();
//     i2.showData();
    
    
//     return 0;
// }






//insertion overloading , thats how we created complex datatype 
// class Complex
// {
// private:
// 	int real, imag;
// public:
// 	Complex(int r = 0, int i =0)
// 	{ real = r; imag = i; }
// 	friend ostream & operator << (ostream &out, const Complex &c); //ostream and istream are classes
// 	friend istream & operator >> (istream &in, Complex &c);
// };

// ostream & operator << (ostream &out, const Complex &c)   //ostream is for writing 
// {
// 	out << c.real;
// 	out << "+i" << c.imag << endl;
// 	return out;
// }

// istream & operator >> (istream &in, Complex &c)  //istream is for reading and here we are overloading the operator '>>' 
// {
// 	cout << "Enter Real Part ";
// 	in >> c.real;
// 	cout << "Enter Imaginary Part ";
// 	in >> c.imag;
// 	return in;
// }

// int main()
// {
// Complex c1;
// cin >> c1;
// cout << "The complex object is ";
// cout << c1;
// return 0;
// }



//exmaple on overloading the << operator for Person class in such a way that for p being an instance of class Person 


// class Person {
// public:
//     Person(const string& first_name, const string& last_name) : first_name_(first_name), last_name_(last_name) {}
//     const string& get_first_name() const {   //&(referance) na dene se bhi answer me koi farq nhi padega
//       return first_name_;
//     }
//     const string& get_last_name() const {
//       return last_name_;
//     }
// private:
//     string first_name_;
//     string last_name_;
// };
// ostream & operator << (ostream &out, const Person &p)   //overloading the '<<' operator
// {
//     out <<"first_name="<<p.get_first_name()<< ",last_name=" << p.get_last_name() ;
   
//     return out;
// }


// int main() {
//     string first_name, last_name, event;
//     cin >> first_name >> last_name >> event;
//     auto p = Person(first_name, last_name);
//     cout << p << " " << event << endl;
//     return 0;
// }





//faltu ka complicated complex class hackerrank
//Operator Overloading


class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
 Complex  operator +(Complex s1, Complex s2)
    {
       Complex temp;
        temp.a = s1.a + s2.a;
        temp.b = s1.b + s2.b;
        return temp;
    }
    ostream & operator<<(ostream &dout,Complex x){
    dout<<x.a<<"+i"<<x.b;
    return dout;
}
   

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
