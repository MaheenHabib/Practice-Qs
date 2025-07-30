#include <iostream>
using namespace std;
int main ()
{
int num, i;
bool IsPrime = true;

cout << "Enter a number to check if it is prime num or not" << endl;
cin >> num;

if( num == 1 || num == 2 )
{
 IsPrime;
}

for(i=2; i<=num-1; i++)
{

 if(num%i==0)
 {
  IsPrime = false;
  cout << num <<" is not Prime number." << endl;
  break;
 }
} 

 if(IsPrime)
 {
  cout << num <<" is a Prime number." << endl;
 }
 
   return 0;
}