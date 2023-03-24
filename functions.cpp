#include <iostream>
using namespace std;
 //fin define krne se pehle uska return type batana zaruri hota ha
 int sum(int a, int b){
    int c;
    c=a+b;
    return c;
 }
int main(){
int a,b;

cout<<"enter 1st no.: ";
cin>>a;
cout<<"enter second no.: ";
cin>>b;
cout<<"the func returned is "<<sum(a,b);
}