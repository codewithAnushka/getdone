#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    /*if(age>18){
        cout<<"you can vote";
    }
    else if(age>150 || age<1){
        cout<<"invalid age";
    }
    else{ cout<<"you cannot vote";}*/
    switch (age)
    {
    case 12:
        cout<<"you are 12 years old"<<endl;
        break;
    case 18:
    cout<<"your are 18"<<endl;
    default:
    cout<<"you are neither 12 or 18 years old";
        break;
    }
}
