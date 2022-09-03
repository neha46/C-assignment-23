#include<iostream>
using namespace std;
int main()
{int n1, add=0;
    cout<<"--- enter number----"<<endl;
    cin>>n1;
    int a[n1];
    cout<<"enter array elements---------->"<<endl;
    // for inputing array
   for(int i=0;i<n1;i++)
   {
       cin>>a[i];
   }
   // for adding array elements
    for(int i=0;i<n1;i++)
   {
       add+=a[i];
   }

     cout<<"Addition is = "<<add<<endl;
return 0;
}



