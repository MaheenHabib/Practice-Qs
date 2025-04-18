#include <iostream>
using namespace std;
int main()
{
 int i, j, row;
 
 cout << "Enter the number of rows:";
 cin >> row;
 i=row;
 
 do
 { 
  j=i;
  do
  {
   cout << j<<" ";
   j--;
   
  }while(j>=1);
  
  cout << endl;
  i--;
  
 }while(i>=1);
 
  return 0;
}