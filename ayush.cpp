#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i <11; i++)
    {
        for (int j = 11; j >i ; j--)
        {
            cout<<"*";
        }
        for (int j = 0; j<i*2; j++)
        {
            cout<<" ";
        }
        for (int k = 11; k>i ; k--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    
}}