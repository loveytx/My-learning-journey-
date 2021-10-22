#include <iostream>
#include <list>
using namespace std;
//better at insertion and deletion
//it has random memory (not contigous) location and we can't use iterator(pointer) by incrementing to find value instead we have to go to that random memory address using iterator so it will not provide faster access of elements unlike array or vector
// template<typename T>

void display(list<int> &lst, list<int>::iterator &it)
{
    // cout << "Displaying this list" << endl;
    it = lst.begin();

    while (it != lst.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;
}

int main()
{
    list<int> list1;    //list of 0-length 
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(7); 
    list<int>::iterator iter;
    // incrementing the positions of iterators
    iter = list1.begin();
    // advance(iter,2); it will incremment the iterator by 2 
    // display(list1, iter); //instead of passing the iter to  display you should have made that iter in display function it would save memory and complexity.

     //removing elements from the list 
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(5); //it will remove 5 from every place in the list1
    // list1.erase(iter); //it will erase element at a particular location by giving it's address using iterator
    cout<<"list 1 : "<<endl;
    display(list1, iter);

    //sorting the list 
    // list1.sort();

    //reversing the list
    list1.reverse();
    cout<<"After reverse : "<<endl;
    display(list1,iter);

   
   
   
    list<int> list2(7); //empty list of size 7,we can initialize like this also --> list2={43,7,9,.....}
    list<int>::iterator iter2= list2.begin();
    *iter2=57;
    iter2++;
    *iter2=43;
    iter2++;
    *iter2=7;
    iter2++;
    cout<<"list 2 : "<<endl;
    display(list2,iter2);
    

    list1.merge(list2);
    list1.sort();
    cout<<"After merging"<<endl;
    display(list1, iter);

    return 0;
}