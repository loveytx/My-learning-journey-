#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //function object(i.e functor): function wrapped in class so that it available like an object.
    int arr[]= {1,8,3,5,23};
    // sort(arr,arr+5);//ye arr se arr+5 tak sort kr dega, it will sort in ascending order
    sort(arr,arr+5, greater<int>());  //greater<int>() is an function object used to print in descending order

    for(auto i = 0; i<5; i++) //here compiler will automatically understand datatype of i,(without initialization of i, it will show error) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}