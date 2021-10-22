#include <iostream>
#include <string.h>
using namespace std;

// int main(){
//    //basic example
// //    int a;
// //    int *ptr = &a; //storing the address of a

// // //    new keyword
// //    int *p = new int(6); //here p is storing the address of 6 which has
// //            //been dynamically allocated the memory of 4 byte from the heap
// //    *p =87;
// //    cout<<*p;
//    int *ptr = new int[5];//ptr is just pointing to base address of the heap memory we just created
//    ptr[0]=78;
//    ptr[1]=545;
//    *(ptr+2)=9;
//    ptr[3]=8;
//    ptr[4]=12;
// //   delete[] ptr;// -->it will dellocate the memory we provide for ptr and if we try to print the value stored in
// //   this heap memory using ptr then it may not print the exact value

//    for (int  i = 0; i < 5; i++)
//    {
//    cout<<"the values of array is: "<<*(ptr+i)<<"\n";
//    }

//    return 0 ;
// }




// //passing values
// class number{
//     int x;
//     public:
//     int y;
//      void setvalue(int *i){ //we give address of the num just because we wanted to change the value of num
//          x = *i;
//        //  *i =876; //see we can change value of num
//      }
//      void getvalue(){
//           cout<<"the value of x is :"<<x<<"\n";
//          cout<<"the value of y is :"<<y<<"\n";
//      }
// };	s
// int main(){
//     // number lovey;
//     // number *ptr = &lovey;
//     number *ptr = new number; //-->it will allocate the memory from the heap to store values of number
//                           // datatype
//     int num=65;
//     //   (*ptr).setvalue(6);
//     // ptr->x =76;-->error since x is private within it's context
//     ptr->y =76;  //or (*ptr).y =76;
//     ptr->setvalue(&num); //will run because setvalue is public and we can access it
//     ptr->getvalue();
//        cout<<"the new value of num is :"<<num<<"\n";

//   //array of objects
//     number *ptr1 = new number[3];
//     int num1=9,num2=8;
//     //1st object of the array
//     ptr1->setvalue(&num1);
//     ptr1->y =6;
//     ptr1->getvalue();

//     //2nd object of the array and we can make three since we have been alloted memory for three objects
//     (ptr1+1)->setvalue(&num2);
//     (ptr1+1)->y =3;
//     (ptr1+1)->getvalue();

//     return 0;
// }





class ShopItem
{
    int Id;
    string name;
    float price;

public:
    void setData(int a,string b, float c)
    {
        Id = a;
        name = b;
        price = c;
    }
    void getData(void)
    {
        cout << "The price of the item no :" << Id <<" with name "<<name<< " is " << price << endl;
    }
};

int main()
   {
//     //items are ---> daal ,chaawal, roti
//                       ^
//                       |
//                       |
//                      ptr  //ptr will move, ptrTemp will not
//                      ptrTemp

    ShopItem *ptr = new ShopItem[3]; //ptr will be pointing to the 1st obj of datatype shopItem
    int i, p;
    string q;
    float r;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter the Id, name and price of the :" << i + 1 << " item " << endl;
        cin >> p >> q>>r;
        (ptr + i)->setData(p, q,r);
    }
    for (i = 0; i < 3; i++)
    {
        (ptr + i)->getData();
    }

    // Or we can do this
    // ShopItem *ptrTemp = ptr;  //ye ptr ko point nhi kar rha hai ,iska matlab hai jaha ptr point 
    //                        //krega ye bhi wahi point krega 
    // for ( i = 0; i < 3; i++)
    // {
    //     cout<<"Enter the Id and price of the :"<<i+1<<" item "<<endl;
    //     cin>>a>>b;
    //     ptr->setData(a,b);
    //     ptr++;
    // }
    // for ( i = 0; i < 3; i++)
    // {
    //     ptrTemp->getData();
    //     ptrTemp++;
    // }

    return 0;
}