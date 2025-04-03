#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 int i, a, z, sum=0;
 
 cout << "Enter the starting point:" << endl;
 cin >> a;
 cout << "Enter the ending point:" << endl;
 cin >> z;
 
 cout << "The even numbers between " <<a<<" and "<<z<<" are: "<< endl;
 
  for(i=a; i<=z; i++)
  {
   if(i%2==0)
    {
     cout << i <<setw(3);
     }
    else
    {
    sum+=i;
    }
  }
  cout << endl;
 cout << "Sum of odd numbers between "<<a<<" and "<<z <<" is: "<<sum<< endl;
 
}