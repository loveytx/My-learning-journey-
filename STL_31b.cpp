#include<bits/stdc++.h>
using namespace std;
 
void study1(){
//         unordered_set<int>ms={2,3,1};
//     ms.insert(5);  //just this store in order and time complexity is fast
// //    all the same functions as in set
  
   //same as set but it can store elements in more than one time
   multiset<int>ms={23,54,4,2,54};
   for ( auto it : ms)
   {
       cout<<it<<" ";
   }
  cout<<"\n"<<
   ms.count(54)<<"\n";//this will print how many times count occur in the set
}
void study2(){
    // stack<int>st;//lifo sys
    // st.push(5);
    // st.push(3);
    // st.push(2);
    // cout<<st.top();//will print top element since 2 is last
    // st.pop();
    // cout<<st.top();//will print top element since 2 is last
    // /*
    // push , pull , swap , size , empty , emplace , top
    // */
    // while (!st.empty()) //to delete entire stack
    // {
    //     st.pop();
    // }
    // if (!st.empty())
    // {
    //     cout<<st.top(); //because if stack is empty then it will throw runtimeerrr so we should always check using if
    // }  

    queue<int> q;//fifo,  opposite of stack,  diff  - q.front
    priority_queue <int>p;
    p.push(1);  //this will store everything in descending order 
    p.push(3); 
    p.push(2); 
    priority_queue<pair<int,int>>pq;
   pq.push(make_pair(1,5));  
   pq.push(make_pair(2,4));  
   pq.push(make_pair(2,3));  
    while (!pq.empty())
    {
        cout<<"("<<pq.top().first<<","<<pq.top().second<<")\n";
        pq.pop();
    }


    //minimum priority queue
    priority_queue<int,vector<int>,greater<int> >pq1;
    pq1.push(1);
    pq1.push(3);
    pq1.push(2);
    while (!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
 
}
int main(){
    // study1();
    study2();


    return 0;
}
