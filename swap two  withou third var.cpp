#include<iostream>
using namespace std;
int main()
{int n1,n2;
    cout<<"--- enter two numbers----"<<endl;
    cin>>n1>>n2;
    cout<<"Before swapping--------------->"<<endl;
    cout<<"Number 1 =  "<<n1<<"\n Number 2= "<<n2<<endl;
  n1=n1+n2;
  n2=n1-n2;
  n1=n1-n2;
  cout<<"After swapping---------------->"<<endl;
     cout<<"Number 1 =  "<<n1<<"\n Number 2= "<<n2<<endl;
return 0;
}


