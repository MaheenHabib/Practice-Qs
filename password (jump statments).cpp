#include <iostream>
using namespace std;

int main()
{
	int key=1234;
	int passkey, attempt=0;
	
	retry:
	cout<<"Enter the password."<<endl;
	cin>>passkey;
	
	 if (passkey==key)
	 {
	 	cout<<"Welcome!";
	 }
	 else 
	 {
	 	attempt++;
	  
	  if(attempt<=2)
	  {
	  	cout<<"Incorrect Password!"<<endl;
	    goto retry;
      }
      else
      {
      	cout<<"ERROR!";
	  }
     }
     
     return 0;
}
