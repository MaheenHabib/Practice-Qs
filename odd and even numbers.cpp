#include <iostream>
using namespace std;
int main ()
{ int i, even=0, odd=0;

for (i=1; i<=50; i++)
 {  
   if (i%5==0)
   {
   	continue;
   }
   if (i%2==0)
   {
 	even++;
   }
   else
   {
   	odd++;
   }
 }
    
	cout<<"Even:"<<even<<endl;
    cout<<"Odd:"<<odd<<endl;
 
   return 0;
}

