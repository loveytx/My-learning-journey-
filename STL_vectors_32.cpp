
#include<bits/stdc++.h>

using namespace std;
/*
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)


Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
*/
template<typename T>
void display(vector<T>&v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;

}

// int main(){
//     // Ways to create a vector--
//     vector <int>vec1; //it will automatically manage size and we don't have to worry about that, Zerolength vector


//       int elements,size;
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     cout<<"Enter the elements"<<endl;
//     //     cin>>elements;
//     //     vec1.push_back(elements);
//     // 
//     // vec1.pop_back(); //weccan also use popfront
//     // vector<int>::iterator itr;
//     // itr=vec1.begin(); 
//     // vec1.insert(itr,566);//this will insert the value at the place where itr is pointing and the syntex of this function is vector_name.insert(iterator_name,no._of_values,values); it will insert only one if not  given by user.
//     // display<int>(vec1); 
   
//     vector <char>vec2(4); //4-element character vector
//     // vec2.push_back('3');
//     // display(vec2);
//     // vector <char>vec3(vec2); //4-element character vector from vec2
//     // display(vec3);
//     vector <int>vec4(6,3); //6-element vector ,will print 3 six times
//     display(vec4);
//     cout<<vec4.size();
 
//     return 0;
// }




//lower bound example
// int main () {
//   int myints[] = 
// {10,20,30,30,20,10,10,20};
//   std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

//   std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

//   std::vector<int>::iterator low,up;
//   low=std::lower_bound (v.begin(), v.end(), 20); //          ^
//   up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

//   std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
//   std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

//   return 0;
// }





//finding the index of the element 
// int main()
// {
//     std::vector<int> v = { 7, 3, 6, 2, 6 };
//     int key = 6;
 
//     std::vector<int>::iterator itr = std::find(v.begin(), v.end(), key);
 
//     if (itr != v.cend()) {
//         std::cout << "Element present at index " << std::distance(v.begin(), itr);
//     }
//     else {
//         std::cout << "Element not found";
//     }
 
//     return 0;
// }






// /* C++ code to demonstrate a 2D vector
//    with elements(vectors) inside it. */

// int main()
// {
//     /*
//     Below we initialize a 2D vector
//     named "vect" on line 12 and then
//     we declare the values on
//     line 14, 15 and 16 respectively.
//     */
     
//     vector<vector<int>> vect
//     {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10,11,12}
//     };
     
//     /*
//     Now we print the values that
//     we just declared on lines
//     14, 15 and 16 using a simple
//     nested for loop.
//     */
//     // cout<<vect.size(); //ans=4because it is considering {1,2,3} as one element therefore it has 3 elements     
//     for (int i = 0; i < vect.size(); i++)
//     {
//         for (int j = 0; j < vect[i].size(); j++) //here v[0]orv[1].... means number of columbs 
//         {
//             cout << vect[i][j] << " ";
//         }   
//         cout << endl;
//     }


 
//     return 0;
// }





// //hackerrank question matrix
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// class Matrix{
//     public:
//     vector<vector<int>> a;
    
//     Matrix& operator+(Matrix &v){
//         for (int i =0; i<this->a.size(); i++) {
//            for (int j=0; j<v.a[0].size(); j++) {
//              this->a[i][j] = this->a[i][j] + v.a[i][j];
//            }
//         }
//         return *this;
        
//     }
      
// };
// int main () {
//    int cases,k;
//    cin >> cases;
//    for(k=0;k<cases;k++) {
//       Matrix x;
//       Matrix y;
//       Matrix result;
//       int n,m,i,j;
//       cin >> n >> m;
//       for(i=0;i<n;i++) {
//          vector<int> b;
//          int num;
//          for(j=0;j<m;j++) {
//             cin >> num;
//             b.push_back(num);
//          }
//          x.a.push_back(b);
//       }
//       for(i=0;i<n;i++) {
//          vector<int> b;
//          int num;
//          for(j=0;j<m;j++) {
//             cin >> num;
//             b.push_back(num);
//          }
//          y.a.push_back(b);
//       }
//       result = x+y;
//       for(i=0;i<n;i++) {
//          for(j=0;j<m;j++) {
//             cout << result.a[i][j] << " ";
//          }
//          cout << endl;
//       }
//    }  
//    return 0;
// }




//hacker rank easy
// using namespace std;


int main() {
    int num,elements;
    cin>>num;
    vector<int >v;
    for (int i=0; i<num; i++) {
        cin>>elements;
        v.push_back(elements);
    }
    int n;
    cin>>n;
    v.erase(v.begin()+n-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for (int i=0; i<num-b+a-1; i++) {
       cout<<v[i]<<" ";
    }
    
    return 0;
}
