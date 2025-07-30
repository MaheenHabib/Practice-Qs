#include <iostream>
using namespace std;

int main ()
{
int n1, n2, GCD;

cout << "Enter two numbers to find their GCD" << endl;
cout << "First Number: ";
cin >> n1;
cout << "Second Number: ";
cin >> n2;

int minNum=(n1<n2)? n1:n2;

for(int i=2; i<=minNum; i++)
{
 if(n1%i==0 && n2%i==0)
 {
  GCD=i;
 }
}
cout << "GCD = "<<GCD << endl; 

   return 0;
}