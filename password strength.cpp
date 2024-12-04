#include <iostream>
using namespace std;
int main ()
{
  string password;
  bool hasdigit= false;
  
  while(true)
  {
  	cout<<"Enter a password."<<endl;
    cin>>password;
  
  	if (password.length() < 8)
  	{
       cout<<"The password should be 8 characters long."<<endl;
       continue;
	}
	
    for (int i=0; i<password.length(); i++)
	 { if (isdigit(password[i]))
	   hasdigit= true;
	   break;
	 }
	if(!hasdigit)
	{
	 cout<<"Your password must contain at least one digit."<<endl;
	}
	
	if (hasdigit && password.length()==8) 
	{
		break;
	}
  }
	cout<<"Strong Password."<<endl;
	


   return 0;
}

