#include <iostream>
using namespace std;
int main ()
{
  int limit, i, total =0;
  int count = 1;
  
  cout<<"Enter the number of items you want to get the total of:"<<endl;
  cin>>limit;
  cout<<"Enter the price of the items one by one (enter 0 to stop):"<<endl;
  
  while(count<=limit)
  {
    cin>>i;
    
    if (i<0)
    {
      continue;
	}
	if (i==0)
	{
	  break;
	}
	 total=total+i;
    count++;
  }
  
    cout<<"Total:"<<total<<endl;
    
   return 0;
}

