#include <iostream>
using namespace std;

// // In structure we take array of objects mostly which we can do in class also but in class we can also
// // make array inside class and take the values from the function that we define and this way it will store
// // the id's ,itemsprice,itemsname...etc
// class shop
// {
// private:
//     int itemId[100];        // defining arrays inside a class
//     int itemPrice[100];       // defining arrays inside a class
//     char itemName[5][20];       // defining arrays inside a class
//     int counter = 0;

// public:
//     void initCounter(void) { counter = 0; }
//     void setInfo(void);
//     void displayInfo(void);
// };

// void shop ::setInfo(void)
// {
//     int i = 0;
//     cout << "enter the Name of item no.:" << counter + 1 << endl;
//     cin >> itemName[counter];
//     cout << "enter the ID of item no.:" << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "enter the Price of item no.:" << counter + 1 << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void shop ::displayInfo(void)
// {
//     int j = 0;
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "the price of item number " << itemId[i] << " with name " << itemName[i] << " is " << itemPrice[i] << endl;
//     }
// }
// int main()
// {
//     shop dukaan;
//     dukaan.initCounter();
//     dukaan.setInfo();
//     dukaan.setInfo();

//     dukaan.displayInfo();
//     return 0;
// }




// without using counter and using loop only
int j=3;
class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    char itemName[5][20];

public:
    void setInfo(void);
    void displayInfo(void);
};

void shop ::setInfo(void)
{
   
    for (int i = 0; i < j; i++)
    {
        
        cout << "enter the Name of item no.:" << i+1<< endl;
        cin >> itemName[i];
        cout << "enter the ID of item no.:" << i + 1 << endl;
        cin >> itemId[i];
        cout << "enter the Price of item no.:" << i + 1 << endl;
        cin >> itemPrice[i];
    }
    
    
}

void shop ::displayInfo(void)
{
    
    for (int i = 0; i < 3; i++)
    {
        cout << "the price of item number " << itemId[i] << " with name " << itemName[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;

    dukaan.setInfo();
    

    dukaan.displayInfo();
    return 0;
}