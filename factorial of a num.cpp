#include <iostream>
using namespace std;
int main ()
{
int num, i=1, sum =1;
 cout << "Enter a number to find its factorial:";
 cin >> num;
 
 while(i<=num)
 {
  sum*=i;
  
  i++;
  
 }
 cout << "Factorial:"<< sum << endl;
 
 return 0;
}