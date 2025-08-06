#include <iostream>
using namespace std;
int main()
{
 int i, j;
 
  for(i=1; i<=5; i++)
  {
    for(j=9; j>=(2*i-1); j--)
    {
    cout << "*";
    }
  cout<<endl;
  }
   return 0;
}
