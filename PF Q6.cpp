#include <iostream>
using namespace std;
int main()
{
 int i;
 
 for(i=2; i<=25; i++)
  {
   if(i==13 || i==16 || i==19)
   {
    continue;
   }
   if(i==23)
   {
    break;
   }
   cout << i <<" ";
  }
 
  return 0;
}