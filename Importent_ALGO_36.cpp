
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;


void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}


int main(){
    // //find algorithm
    // vector<int> vec1={22,42,23,52,2,5};
    // vector<int>::iterator iter ;

    // iter = find(vec1.begin(),vec1.end(), 52);
    // if (iter!=vec1.end())
    // {
    //     cout<<"the value "<<*iter<< " is at position " << iter - vec1.begin()<<"(starting from zero)";  //we can not find the position like this in lists because it doesn't store in contigous memory blockss here we can also make normal pointer. 
    // }


    // //count algorithm
    // list<string> list1={"harry","lovey","rohan","lovey"};

    // int mycount = count(list1.begin(),list1.end(),"lovey");
    // cout<<"The no. of times lovey appeared in the list is : "<<mycount;


//     //equal algorithm
//    bool pred(int i, int j)
//    {
//        return (i != j);
//    }
     
//    int main()
//    {
//        int v1[] = { 10, 20, 30, 40, 50 };
//        std::vector<int> vector_1 (v1, v1 + sizeof(v1) / sizeof(int) );
     
//        // Printing vector1
//        std::cout << "Vector contains : ";
//        for (unsigned int i = 0; i < vector_1.size(); i++)
//            std::cout << " " << vector_1[i];
//        std::cout << "\n";
     
//        // using std::equal()
//        // Comparison based on pred
//        if ( std::equal (vector_1.begin(), vector_1.end(), v1, pred) )
//            std::cout << "The contents of both sequences are equal.\n";
//        else
//            printf("The contents of both sequences differ.");
     
//    }




// CPP program to implement
// Binary Search in
// Standard Template Library (STL)


  

    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  

  return 0;
}