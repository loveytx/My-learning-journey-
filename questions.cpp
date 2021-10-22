#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <sstream>
#include <exception>
#include <stdexcept>
#include <cmath>
using namespace std;
// // difference vector tree
// void display(vector<int> &v)
// {
//     // cout<<"Displaying this vector"<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//         // cout<<v.at(i)<<" ";
//     }
//     cout << endl;
// }
// int main()

// {
//     int n;
//     cin >> n;
//     vector<int> vec(n, 0); //iniialising the vector(size,value)
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         // O(q/)
//         int l, r;
//         cin >> l >> r;
//         vec[l]++;
//         if (r + 1 < n)
//         {
//             vec[r + 1]--;
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         //O(n)
//         vec[i] = vec[i] + vec[i - 1];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << vec[i] << " ";
//         // cout<<v.at(i)<<" ";
//     }
//     // display(vec);

//     return 0;
// }



// // A fast IO program
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // added the two lines below
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k, t;
//     int cnt = 0;
//     cin >> n >> k;
//     for (int i=0; i<n; i++)
//     {
//         cin >> t;
//         if (t % k == 0)
//             cnt++;
//     }
//     cout << cnt << "\n";
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, k;
//     int count = 0;
//     long unsigned int t;
//     cin >> n >> k;
//     while (n--)
//     {
//         cin >> t;
//         if (t % k == 0)
//         {
//             count++;
//         }
//     }
//     cout << count;

//     return 0;
// }


//for brushing up concept of string
// int main(){
//     string line;
//     int i=1;
//     getline(cin,line);
//     if (line[i]=='t')
//     {
//         cout<<"found";
//     }
  
//     return 0;
// }


// //make own language name hrml 
// #include <iostream>
// #include <map>
// using namespace std;

// map <string, string> tagMap;

// void createMap(int &n, string pretag) {
//     if(!n) return;
    
//     string line, tag, attr, value;
//     getline(cin, line);
    
//     int i=1;
//     if(line[i]=='/') {           // found closing tag
//         while(line[i]!='>') i++;
//         if(pretag.size()>(i-2))		// update tag
//             tag = pretag.substr(0,pretag.size()-i+1);
//         else
//             tag = "";
//     }
//     else {                       // found opening tag
//         while(line[i]!=' ' && line[i]!='>') i++;
//         tag = line.substr(1,i-1);	// update tag
//         if(pretag!="") tag = pretag + "." + tag;
        
//         int j;
//         while(line[i]!='>') { // go through attributes
//             j = ++i;
//             while(line[i]!=' ') i++;
//             attr = line.substr(j,i-j);	// attribute name
            
//             while(line[i]!='\"') i++;
//             j = ++i;
//             while(line[i]!='\"') i++;
//             value = line.substr(j,i-j);	// attribute value
//             i+= 1;
            
//             tagMap[tag + "~" + attr] = value;
//         }
//     }
//     createMap(--n, tag);
// }

// int main() {
//     int n, q;
//     cin >> n >> q;
//     cin.ignore();
//     createMap(n,"");
    
//     string attr, value;
//     while(q--) {
//         getline(cin,attr);
//         value = tagMap[attr];
//         if(value=="") value = "Not Found!";
//         cout << value << endl;
//     }
//     return 0;
// }



// //macro all type of function used 
// /* Enter your macros here */
// #define INF (unsigned)!((int)0)
// #define foreach(v,i) for(int i=0 ; i<v.size(); i++)
// #define io(v) cin>>v
// #define toStr(str) #str
// #define FUNCTION(name, operator)  inline void name(int &current, int candidate){!(current operator candidate) ? current = candidate : false;}
// #include <iostream>
// #include <vector>
// using namespace std;

// #if !defined toStr || !defined io || !defined FUNCTION || !defined INF
// #error Missing preprocessor definitions
// #endif 

// FUNCTION(minimum, <)
// FUNCTION(maximum, >)

// int main(){
// 	int n; cin >> n;
// 	vector<int> v(n);
// 	foreach(v, i) {
// 		io(v)[i];
// 	}
// 	int mn = INF;
// 	int mx = -INF;
// 	foreach(v, i) {
// 		minimum(mn, v[i]);
// 		maximum(mx, v[i]);
// 	}
// 	int ans = mx - mn;
// 	cout << toStr(Result =) <<' '<< ans;
// 	return 0;

// }




// //exception problems
// /* Define the exception here */
// class BadLengthException {
//     int n;
//     public:
//     BadLengthException(int n){
//      this->n= n;   
//     }
//     int what(){
//         return  n;
//     }
    
// };
// bool checkUsername(string username) {
// 	bool isValid = true;
// 	int n = username.length();
// 	if(n < 5) {
// 		throw BadLengthException(n);   //here is parameter for the class
// 	}
// 	for(int i = 0; i < n-1; i++) {
// 		if(username[i] == 'w' && username[i+1] == 'w') {
// 			isValid = false;
// 		}
// 	}
// 	return isValid;
// }
// int main() {
// 	int T; cin >> T;
// 	while(T--) {
// 		string username;
// 		cin >> username;
// 		try {
// 			bool isValid = checkUsername(username);
// 			if(isValid) {
// 				cout << "Valid" << '\n';
// 			} else {
// 				cout << "Invalid" << '\n';
// 			}
// 		} catch (BadLengthException e) {
// 			cout << "Too short: " << e.what() << '\n';
// 		}
// 	}
// 	return 0;
// }



using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;

		/* Enter your code here. */
     try {
            cout << Server::compute(A,B) << endl;
        } 
        catch (bad_alloc& error) {
            cout << "Not enough memory" << endl;
        }
        catch (exception& error) {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
	}
	cout << Server::getLoad() << endl;
	return 0;
}






//virtual function


using namespace std;
class Person {
    public:
    string name;
    int age;
    virtual void getdata(){
       cin>>name>>age; 
    }
    virtual void putdata(){
        
       cout<<name<<age<<endl; 
    }
    
};
class Professor :public Person {
   int publication;
    int cur_id;
    static int id;
   public:
         Professor(void){
         cur_id = ++id;
             
         }
     void  getdata(void){
          cin>>name;
          cin>>age ;
          cin>>publication; 
      }
      void putdata(void){
          cout<<name<<" "<<age<<" "<<publication<<" "<<cur_id<<endl;
      }
    
};
class Student :public Person {
   int marks[6];
   int markssum;
   static int id;
  int cur_id;
   public:
         Student(void){
         cur_id =  ++id;
             
         }
     void  getdata(void){
         cin>>name;
          cin>>age ;
          for (int i =0; i<6; i++) {
          cin>>marks[i];         
          }
      }
      void putdata(void){
          for (int i= 0; i<6; i++) {
            markssum = markssum  + marks[i];
          }
          cout<<name<<" "<<age<<" "<<markssum<<" "<<cur_id<<endl;
       
      }
    
};
int Professor:: id =0 ;
int Student:: id =0 ;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}