#include <iostream>
#include<string>
using namespace std;
int main()
{
    string name = "Anushka";
                // 1234567
    cout<<"the name is "<<name<<endl;
    cout<<"the length of name is "<<name.length()<<endl;
    cout<<"the name is "<<name.substr(1,3)<<endl;//2 se leke 4 index tak print krega
    cout<<"the name is "<<name.substr(2,3)<<endl;//3 se leke 3 index ke baad tak ke char print krega

}