#include <iostream>
using namespace std;
int main()
{
 int i=1, j, row;
 
 cout << "Enter the number of rows:";
 cin >> row;
 
 while(i<=row)
 {
   j=1;
   while(j<=i)
   {
    cout <<i;
    j++;
   }
   cout << endl;
   i++;
 }
 
  return 0;
}