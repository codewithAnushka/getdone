#include<iostream>
using namespace std;
 int main(){
    // checking a num is prime or not 
    int n;
    cout<<"Enter the postive integer "<<endl;
    cin>>n;
    bool isPrime=1;//setting the val true
    if(n==0 || n==1){
        isPrime=0;
    }
    for(int i=2; i<n/2; i++){
        if(n % i == 0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        cout<<" the num is a prime"<<endl;
    }
    else{
        cout<<"the num is not a prime"<<endl;
    }

 }