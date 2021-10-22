#include<bits./stdc++.h>
using namespace std;

int main(){
    // array<int,4>arr={32,3432,42,42};  //in vector we will write vector <int>... we dont have to give size here 

    // for (auto  itr = arr.begin(); itr!= arr.end(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }
    // cout<<"\n";

    // //to reverse array
    // for (auto  itr = arr.rbegin(); itr!= arr.rend(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }
    //  cout<<"\n";

    
    // for (auto  itr : arr)//here itr itself works as an element and pointer too and it will stop printing after printing all the elements of the array or string .....
    // {
    //     cout<<itr<<" ";
    // }
    //  cout<<"\n";

    // string str={"hlrloo"};
    // for (auto  itr : str)//here itr itself works as an element  and it will stop printing after printing all the elements of the array, string,vector,list,maps etc .....
    // {
    //     cout<<itr<<" ";
    // }
    // cout<<"\n";


    // list<int> l;
    // l.emplace_back(76);
    // l.push_back(76);
    // l.push_back(76);
    // for (auto  itr : l)
    // {
    //     cout<<itr<<" ";
    // }
    // cout<<"\n";


    map<string,int>mp;
    mp["lovey"]=4; 
    mp["abc"]=2; 
    mp["honey"]=1; 
    for (auto  itr2 : mp)
    {
        cout<<itr2.first<<" "<<itr2.second<<" ";//since it is behaving as element here so we will not        use  '->' because it is used when we have to dereferance the pointer 
    }
    cout<<"\n";


    
    // vector<vector<int>>vec(10,vector<int>(20,1));// create vector of 10*20 vector and initialize first vector inside the vec with 1 or----
    // vec.push_back(vector<int>(20,1));
    vector<vector<int>>vec;  //or we can also do this vec={{1,2},{4,5,6}}  
    vector<int>raj1={1,2};
    vector<int>raj2={4,5,6};
    vec.push_back(raj1);
    vec.push_back(raj2);

    for (auto  v : vec)  //it means that v itself is an vector here because vec contains vectors
    {
        for (auto itr: v)   //here itr is now an element of v i.e elements inside v
        {
            cout<<itr<<" ";
        }
        
    cout<<"\n";
    }
    // cout<<vec[0][1];  //to print a particular element  we can use at() also

    // //traditional way
    // for (int i=0;i<vec.size();i++)
    // {
    //     for (int j=0;j<vec[i].size();j++) 
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
        
    // cout<<"\n";
    // }




    // //  array of vectors e.g to create normal array we use int arr[4]; to create 4 variables of int type
    // //similarly if you write vector<int> arr[4];  it will create 4 variables of vector type
    // vector<int> arr[4];
    // for (int  i = 0; i < 1; i++)
    // {
    //    for (int j = 0; i < 5; i++)
    //    {
    //         int e;
    //         cin>>e;
    //         arr[i].push_back(e);
    //    }
       
    // }
    
    // for (auto  v : arr)  //it means that itr itself is an vector here because vec contains vectors
    // {
    //     for (auto itr: v)   //here itr is now an element of v i.e elements inside itr
    //     {
    //         cout<<itr<<" ";
    //     }
        
    // cout<<"\n";
    // }





    // // 3d Vectors  e.g 10*20*30
    // vector<vector<vector<int>>> vec2={{{1,2},{3,4}},{{5,6},{7,8}}};
    // for (auto vctr1 : vec2)
    // {
    //     for (auto vctr2 : vctr1)
    //     {
    //         for (auto itr2 : vctr2)
    //         {
    //             cout<<itr2<<" ";
    //         }
            
    //     }
        
    // }



//we can not access it like s[],s.at().   we can use *s.begin()+i,or iterator to access it
    set<int>s;
    // set<int>set1(s.begin(),s.find(34));  //to copy set from begin to before 34 same as vector
    // set<int,greater<int>>s; //value will be inserted in descending order 
    s.insert(34);  //time complexity for insert func is log(n) --  fast
    s.insert(10);  //or s.emplace(10)  -->little faster
    s.insert(20);
    s.insert(20);//this value already existed therefore not will be inserted
    s.insert(30);
    
    cout<<"size : "<<s.size()<<", "<<"max_size : "<<s.max_size()<<"\n";
    // s.erase(10);  //will erase only 10 
    for ( auto  it: s)
    {
        cout<<it<<" ";  //always will print in sorted order 
    }
    cout<<"\n";
    //s.find(7642); //this will return an iterator to end 
    // s.erase(s.begin(),s.begin() + 3);//-->this is wrong
    s.erase(s.begin(),s.find(20));//it will delete every element before 20
    for ( auto  it: s)
    {
        cout<<it<<" ";  //always will print in sorted order 
    }
    cout<<"\n";
    s.clear();//it will delete entire set
    cout<<"Size after clear : "<<s.size();
    return 0;
}

