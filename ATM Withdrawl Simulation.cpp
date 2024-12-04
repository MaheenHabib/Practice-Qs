#include <iostream>
using namespace std;
int main ()
{
int balance=0, withdraw=0;

cout<<"Enter your Bank Balance:"<<endl;
cin>>balance;
cout<<"Enter the withdrawl amount:"<<endl;

while(true)
{ 
   cin>>withdraw;

  if (withdraw%500==0 && withdraw<balance)  
   {
	cout<<"withdraw amount...."<<endl;
	break;
   }
  if (withdraw==0)
  {
  	break;
  }
  else
  {
  	cout<<"Invalid Input. Enter again."<<endl;
  }
}

   return 0;
}

