#include <iostream>
using namespace std;
int main ()
{
  int hours, overt, i, count=1;
  	
  cout<<"Enter the number of employees:"<<endl;
  cin>>i;
  cout<<"Enter the number of hours worked by each employee:"<<endl;
  
  while(count<=i)
  { 
  	cin>>hours;
	
  	if (hours>40)
  	{
      overt = (hours - 40) * 10;
      cout<<"Overtime pay for employee "<<i<<": $"<<overt<<endl;
	}
    
  	if (hours<40)
	{
	  cout<<"No overtime pay employee "<<i<<endl;
	}
	
	count++;
  }

   return 0;
}

