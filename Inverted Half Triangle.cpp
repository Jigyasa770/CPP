/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   
   for(int i = n;i>=1;i--){
       for(int j=1;j<=i;j++){
           cout<<"*";
           
       }
       cout<<endl;
   }
   
    return 0;
}
