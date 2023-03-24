#include <iostream>
using namespace std;
int main()
{
    // for (int i = 1; i <=5; i++) // sirf next line me jane k liye (row)
    // {
    //     for (int j = 1; j <= i; j++) // no. of stars print krne ke liye
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }
    // for (int i = 1; i <=5; i++) 
    // {
    //     for (int j = 4; j >= i; j--) 
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }
    /*
    for (int i = 1; i <=5; i++)
    {
        for(int j=1; j<=5-i; j++){
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
}*/
    /*for (int i = 0; i <11; i++) 
    {
        for (int j = 0; j <=i; j++) 
        {
            cout <<"*";
        }

        for (int k = 20; k>i*2; k--)
        {
            cout<<" ";
        }

        for (int l = 0; l <= i; l++) 
        {
            cout <<"*";
        }
        cout<<endl;
    }*/

    /*for (int i = 0; i<5; i++)
    {
        for (int j = 5; j >i ; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
     for (int i = 1; i<5; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }*/

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"."<<endl;
    // }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j<10; j++)
        {
            cout<<".";
        }
        cout<<endl;
    }
    
}