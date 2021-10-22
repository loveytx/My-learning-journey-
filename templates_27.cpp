#include <iostream>
#include <string>
using namespace std;
/*why to use tamplate ?
Ans. Templates are a feature of the C++ programming language that allows functions and classes to operate 
with generic types. This allows a function or class to work on many different data types without being 
rewritten for each one.
it helps in code reusability and generic programming. 
template ki madad se hum bahut saari classes or functions bana sakte hai, and unme diff ye hoga ki vo diff 
datatype ki hogi isliye hum sirf ek general datatype (T) likh denge int,float wagera likhne ki bajaye 
and datatype apni marzi se chunn kr hum wo wali class use kr sakte hai.

For example, the C++ Standard Library contains the function template max(x, y) which returns the larger
of x and y. That function template could be defined like this:
template<typename T> T max(T a, T b) { return a > b ? a : b; }

1.1 function template
template<class identifier> declaration;
template<typename identifier> declaration;


1.2 Class templates(ye humne kr liya)
A class template provides a specification for generating classes based on parameters. Class templates are generally used to implement containers. A class template is instantiated by passing a given set of types to it as template arguments.

1.3 Variable templates
In C++14, templates can be also used for variables, as in the following example:

template<typename T> 
constexpr T pi = T{3.141592653589793238462643383L}; // (Almost) from std::numbers::pi

1.4 Template specialization
When a function or class is instantiated from a template, a specialization of that template is created by the compiler for the set of arguments used, and the specialization is referred to as being a generated specialization
For example, consider a sort() template function. One of the primary activities that such a function does is to swap or exchange the values in two of the container's positions. If the values are large  then it is often quicker to first build a separate list of pointers to the objects, sort those pointers, and then build the final sorted sequence. If the values are quite small however it is usually fastest to just swap the values in-place as needed. Furthermore, if the parameterized type is already of some pointer-type, then there is no need to build a separate pointer array. Template specialization allows the template creator to write different implementations and to specify the characteristics that the parameterized type(s) must have for each implementation to be used.

Unlike function templates, class templates can be partially specialized. 


// */
// template<class T>  //humne yaha or ek custom datatype bana di sabhi pre defined datatype ko support kregi
// class vector    //and we dont had to create diff classes for flaot,char ....etc
// {
// public:
//     int size;
//     T *arr;
//     vector(int size)
//     {
//        this->size = size;
//         arr = new T[size];
//     }
//     T dotProduct(vector v)//remember call by reference ??
//     { 
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += (this->arr[i] * v.arr[i]); // d = d + ( this->arr[i] * v.arr[i]);,this na likhne se waise 
//                                     //koi farq nahi padega
//         }
//         return d;
//     }
// };
// int main()
// {
//     // vector v1(3);
//     // v1.arr[0] = 1;
//     // v1.arr[1] = 4;
//     // v1.arr[2] = 1;

//     // vector v2(3);
//     // v2.arr[0] = 3;
//     // v2.arr[1] = 1;
//     // v2.arr[2] = 6;
//     // int a = v1.dotProduct(v2);
//     // cout << a<<endl;


//     vector <float>v1(3);
//     v1.arr[0] = 1.43;
//     v1.arr[1] = 4.3;
//     v1.arr[2] = 1.3;

//     vector<float> v2(3);
//     v2.arr[0] = 3.6;
//     v2.arr[1] = 1.2;
//     v2.arr[2] = 6.8;
//     float a = v1.dotProduct(v2);
//     cout << a<<endl;

//     return 0;
// }








// //masti chal rhi hai
// class vector
// {
// public:
//     int size;
//     int *arr;
//     vector(int size)
//     {
//        this->size = size;
//         arr = new int[size];
//     }
//     vector& dotProduct(vector v)//remember call by reference ??   reurning vector& means we are returning 
//                                //the referance of object itself and if we don't write & then this means 
//                                //that we are returning the value of object not object itself
//     { 
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += (this->arr[i] * v.arr[i]); // d = d + ( this->arr[i] * v.arr[i]);,this na likhne se waise 
//                                     //koi farq nahi padega
//         }
//         return *this;
//     }
// };
// int main()
// {
//     vector v1(3);
//     v1.arr[0] = 1;
//     v1.arr[1] = 4;
//     v1.arr[2] = 1;

//     vector v2(3);
//     v2.arr[0] = 3;
//     v2.arr[1] = 1;
//     v2.arr[2] = 6;
//     vector v3 = v1.dotProduct(v2);
//     cout << "The value of dotproduct of the vector v1 and v2 is :" << v3.arr[1];

//     return 0;
// }



// template in functions
// template<class T>  //or we can write typename insted of class also.
// void  print(T value){
   
//     cout<<"The value is :"<<value<<endl;
// }

// int main(){
//     print(4);//or print<int>(4) compiler will automatically understand which datatype value we are giving but
//     print(4.36f); //if there are two value of diff datatype and you have mention both as T in template then
//     print("hello");// you have to specify which datatype is to be used
    
//     return 0;
// }



template<typename T, int N>
class Array{
    T m_array[N];
    public:
      T getSize(){
          return N;
      }
};
int main(){
    Array<float,5> arr;
   cout<< arr.getSize();
    
    return 0;
}
