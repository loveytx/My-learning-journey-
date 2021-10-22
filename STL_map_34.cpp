#include <bits/stdc++.h>

  
using namespace std;
/*
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values
 
Some basic functions associated with Map:
begin() – Returns an iterator to the first element in the map
end() – Returns an iterator to the theoretical element that follows last element in the map
size() – Returns the number of elements in the map
max_size() – Returns the maximum number of elements that the map can hold
empty() – Returns whether the map is empty
pair insert(keyvalue, mapvalue) – Adds a new element to the map
erase(iterator position) – Removes the element at the position pointed by the iterator
erase(const g)– Removes the key value ‘g’ from the map
clear() – Removes all the elements from the map
*/


int main(){
     // multimap <string,int> mp;  -->it can store repeated values
     // unordered_map <string,int> mp;  -->it can store withour order
     map<string,int>marksMap;
     string name;
     marksMap["rohan"] = 98;   //sort in order always and only unique keys
     // marksMap["lovey"] = 32;
     marksMap.emplace("lovey",32);  //works exactly same 
     marksMap["suraj"] = 2;
     marksMap["suraj"] = 6;  //this will overwrite the value 2
     //to check if map is empty or not 
     // marksMap.empty();  returns boolean i.e true if empty
     //inserting two key and and there element
     marksMap.insert({{"kozume",89},{"kirti",43}});
     //to delete an element
     // marksMap.erase("lovey"); //it will delete only lovey 
     // marksMap.erase(marksMap.begin(),marksMap.find("lovey"));//to delete till lovey

     map<string,int>::iterator iter;
     for (iter =marksMap.begin();iter!= marksMap.end(); iter++)
     {
          // cin>>name;// if i want to decide whose marks i want to print then i can just type and pass that as key
          // cout<<marksMap[name]<<"\n";//and if we enter wrong key here it will print 0 since it points to end
          cout<<iter->first<<" "<<iter->second<<endl;//or (*iter).first, (*iter).second, also here
          // (*iter).first will give us key (i.e name) and (*iter).second will give us marks
     }

     cout<<"The size is "<<marksMap.size()<<endl;
     cout<<"The max size is "<<marksMap.max_size()<<endl;
     cout<<"The empty return value is "<<marksMap.empty()<<endl;


//pairs 
     //  pair<int,string> p={1,"lovey"};//it stores only two hetrogneous elements 
      pair<pair<int,string>,string> p={{1,"lovey"},"honey"};//pair inside a pair
      cout<<p.first.second<<"\n";//--> it will print lovey
     pair<int,int>p1;
     
     // vector<pair<int,int>>v;--> this is right
     // set<pair<int,int>>s;--> this is right
     // map<pair<int,int>>m;--> this is right
     // unordered_map<pair<int,int>>  --> this is wrong

     p1 = make_pair(2,4);//we can use this also to make pairs 
     cout<<p1.first<<" "<<p1.second;
      return 0;
}



//unordered map has time compexity of o(1) and in worst case n and for map it is logn, n = container size
//pair


  
// int main()
// {
//     // empty map container
//     map<string, int> gquiz1;
  
//     // insert names in random order and it will sort itself
//     gquiz1.insert(pair<string, int>("ram", 40));
//     gquiz1.insert(pair<string, int>("sham", 30));
//     gquiz1.insert(pair<string, int>("mohan", 60));
//     gquiz1.insert(pair<string, int>("chomu", 20));
//     gquiz1.insert(pair<string, int>("lovey", 50));
//     gquiz1.insert(pair<string, int>("suraj", 50));
//     gquiz1.insert(pair<string, int>("honey", 10));
//     //herer the names will first sort itself than print and begin, end and everything will be decided  after sorting
//     // printing map gquiz1
//     map<string, int>::iterator itr;
//     cout << "\nThe map gquiz1 is : \n";
//     cout << "\tName\tMarks\n";
//     for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
//         cout << '\t' << itr->first
//              << '\t' << itr->second << '\n';
//     }
//     cout << endl;
  
//     // assigning the elements from gquiz1 to gquiz2
//     map<string, int> gquiz2(gquiz1.begin(), gquiz1.end());
  
//     // print all elements of the map gquiz2
//     cout << "\nThe map gquiz2 after"
//          << " assign from gquiz1 is : \n";
//     cout << "\tName\tMarks\n";
//     for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//         cout << '\t' << itr->first
//              << '\t' << itr->second << '\n';
//     }
//     cout << endl;
  
//     // remove all elements up to
//     // element with mohan in gquiz2
//     cout << "\ngquiz2 after removal of"
//             " elements less than key=3 : \n";
//     cout << "\tName\tMarks\n";
//     gquiz2.erase(gquiz2.begin(), gquiz2.find("mohan"));
//     for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//         cout << '\t' << itr->first
//              << '\t' << itr->second << '\n';
//     }
  
//     // remove the name suraj
//     int num;
//     num = gquiz2.erase("suraj");
//     cout << "\ngquiz2.erase(4) : ";
//     cout << num << " removed \n";
//     cout << "\tName\tMarks\n";
//     for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//         cout << '\t' << itr->first
//              << '\t' << itr->second << '\n';
//     }
  
//     cout << endl;
  
//     // lower bound and upper bound for map gquiz1 key = 5
//     cout << "gquiz1.lower_bound(chomu) : "
//          << "\tName = ";
//     cout << gquiz1.lower_bound("chomu")->first << '\t';
//     cout << "\tMarks = "
//          << gquiz1.lower_bound("chomu")->second << endl;
//     cout << "gquiz1.upper_bound(chomu) : "
//          << "\tName = ";
//     cout << gquiz1.upper_bound("chomu")->first << '\t';
//     cout << "\tMarks = "
//          << gquiz1.upper_bound("chomu")->second << endl;
  
//     return 0;
// }





// //hackerrank easy
// #include <set>

// using namespace std;
// int main() {
//     int q;
//     int num;
//     string name;
//     int marks;
//     cin>>q;
//     map<string,int>m;
//     map<string,int>::iterator itr;
    
    
//     for (int i =0; i<q; i++) {
//         cin>>num>>name;
//         if (num==1) {
//          cin>>marks;
//          m[name] = m[name]+ marks;
//          m.insert({name,marks});
//         }
//         else if (num==2) {
//            m.erase(name);
//         }
//         else {
//         //     itr =  m.find(name);
//         //     if (itr != m.end()) {
//         //    cout<<itr->second<<endl;
            
//         //     }
//         //     else {
//         //        cout<<"0"<<endl;
//         //     }
//         cout<<m[name]<<endl;
//         }
        
//     }
    
//     return 0;
// }
