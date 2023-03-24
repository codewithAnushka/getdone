#include <iostream>
using namespace std;
int main()
{
    //id array for stoing list

    // arrays4
    /* int arr[]={1,2,3};
  // arr index   0 1 2
     cout<<arr[2];*/
    //  int marks[
        
   //2d array
   int arr[2][3]= {
    {1,2,3},
    {4,5,6}
   };
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<"the value at "<<i<<" , "<<j<<" is "<<arr[i][j]<<endl;
    }
    
}

}