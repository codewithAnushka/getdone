#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // *
    // **
    // ***
    // ****
    /*int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<"* ";
        j++;
        }
         cout<<endl;
    i++;
    }*/

    //    *
    //   **
    //  ***
    // ****
    //*****

    /*int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }*/

    //****
    // ***
    //  **
    //   *
    /*int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<" *";
            j++;
        }
        cout<<endl;
        i++;
    }
       */
    /* int i=1;
     while(i<=n){
       int space=1;
       while(space<i){
           cout<<" ";
           space++;

       }
       int j=1;
       while(j<=n-i+1){
   cout<<"*";
   j++;
       }

       cout<<endl;
       i++;

     }*/

    // 1111
    //  222
    //   33
    //    4

    /* int i=1;
     while(i<=n){
       int spaces=1;
       while(spaces<i){
           cout<<" ";
           spaces++;
       }
       int j=1;
       while(j<=n-i+1){
           cout<<i;
           j++;
       }
       cout<<endl;
       i++;
     }*/

    /*int i=1;
      while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
      }*/

    // 1234
    //  234
    //   34
    //    4

   /* int i = 1;
    // int j = 1;
    // int count = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= i-1)
        {
            cout << " ";
            space++;
        }
        int j=i;
        // int count=1;
        while (j <= n)
        {
            int k=1;
            cout << j;
            // k++;6
            j++;
        }
        cout << endl;
        i++;
    }}*/
//     #include <iostream>

// using namespace std;

// int main() {

// int i,j;

// for(i=1;i<=n;i++) {

// for(j=i;j<=n;j++)

// cout << j << " ";

// cout << endl;

// }

// return 0;

// }
//    1
//   23
//  456
//78910
int i=1, count=1;
while(i<=n){
    int j=1;
    int space=1;
    while(space<=n-i){
        cout<<" ";
        space++;
    }
    // int j=1;
    // int count=1;
    while(j<=i){
cout<<count;
count++;
j++;
    }
    cout<<endl;
    i++;
    // cout<<endl;
}}