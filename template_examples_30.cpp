// #include <iostream>
// using namespace std;
// class class0
// {
//     public:
//     virtual ~class0(){}
//     protected:
//     char p;
//     public:
//     char getChar();
// };
// class class1 : public class0
// {
//     public:
//     void printChar();
// };
// void class1::printChar()
// {
//     cout  << "True" << endl;
// }
// int main()
// {
//     class1 c;
//     c.printChar();
//     return 0;
// }





// #include <iostream>
// using namespace std;
 
// template <typename T>
// void fun(const T&x)
// {
//     static int count = 0;
//     cout << "x = " << x << " count = " << count << endl;
//     ++count;
//     return;
// }
 
// int main()
// {
//     fun<int> (1); 
//     cout << endl;
//     fun<int>(1); 
//     cout << endl;
//     fun<double>(1.1);
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
 
// template <typename T>
// T max(T x, T y)
// {
//     return (x > y)? x : y;
// }
// int main()
// {
//     cout << max(3, 7) << std::endl;
//     cout << max(3.0, 7.0) << std::endl;
//     cout << max(3, 7.0) << std::endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// template <class T>
// class Test
// {
// private:
//     T val;
// public:
//     static int count;
//     Test()  {   count++;   }
// };
 
// template<class T>
// int Test<T>::count = 0;
 
// int main()
// {
//     Test<int> a;
//     Test<int> b;
//     Test<double> c;
//     cout << Test<int>::count   << endl;
//     cout << Test<double>::count << endl;
//     return 0;
// }




// #include<iostream>
// #include<stdlib.h>
// using namespace std;
 
// template<class T, class U>
// class A  {
//     T x;
//     U y;
//     static int count;
// };
 
// int main()  {
//    A<char, char> a;
//    A<int, int> b;
//    cout << sizeof(a) << endl;
//    cout << sizeof(b) << endl;
//    return 0;
// }





// #include<iostream>
// #include<stdlib.h>
// using namespace std;
 
// template<class T, class U, class V=double>
// class A  {
//     T x;
//     U y;
//     V z;
//     static int count;
// };
 
// int main()
// {
//    A<int, int> a;
//    A<double, double> b;
//    cout << sizeof(a) << endl;
//    cout << sizeof(b) << endl;
//    return 0;
// }





// #include <iostream>
// using namespace std;
 
// template <class T, int max>
// int arrMin(T arr[], int n)
// {
//    int m = max;
//    for (int i = 0; i < n; i++)
//       if (arr[i] < m)
//          m = arr[i];
 
//    return m;
// }
 
// int main()
// {
//    int arr1[]  = {10, 20, 15, 12};
//    int n1 = sizeof(arr1)/sizeof(arr1[0]);
 
//    char arr2[] = {1, 2, 3};
//    int n2 = sizeof(arr2)/sizeof(arr2[0]);
 
//    cout << arrMin<int, 10000>(arr1, n1) << endl;
//    cout << arrMin<char, 256>(arr2, n2);
//    return 0;
// }



// #include <iostream>
// using namespace std;
 
// template <int i>
// void fun()
// {
//    i = 20;
//    cout << i;
// }
 
// int main()
// {
//    fun<10>();
//    return 0;
// }
// Compiler error in line "i = 20;" Non-type parameters must be const, so they cannot be modified.




// #include <iostream>
// using namespace std;
 
// template <class T>
// T max (T &a, T &b)
// {
//     return (a > b)? a : b;
// }
 
// template <>
// int max <int> (int &a, int &b)
// {
//     cout << "Called ";
//     return (a > b)? a : b;
// }
 
// int main ()
// {
//     int a = 10, b = 20;
//     cout << max <int> (a, b);
// }
// Above program is an example of template specialization. Sometime we want a different behaviour 
// of a function/class template for a particular data type. For this, we can create a specialized
//  version for that particular data type.



