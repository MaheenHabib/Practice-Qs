#include<iostream>
using namespace std;
int main()
{ int a, b, c;
  cout<<"enter values of a b and c"<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  
  if (a!=b)
  {
    if (a!=c)
    {
     if (b!=c)
     {
      cout << "they all are not equal" << endl;
     }
    }
  }  
  
  if (a==b==c)
  {
    cout << "they all are equal" << endl;
  }
  return 0;
}  