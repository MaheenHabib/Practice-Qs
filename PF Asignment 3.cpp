#include <iostream>
using namespace std;

int main() 
{
   int n;   //declaring an Integer
   
    cout << "Enter a Number:" << endl;
    cin >>n;  
    
    if (n>0)   // Check if input is greater than 0
    {
       cout << "Your Number is Positive." << endl;
    }
    else if (n<0)
    {  
       cout << "Your Number is Negative." << endl;
    }
    else  // Check if input is equal to 0
    {
       cout << "Your Number is Zero." << endl;
    }   
    
    return 0;
}