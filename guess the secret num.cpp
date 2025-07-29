#include <iostream>
using namespace std;
int main() 
{ 
  const int secretnum=5;
  int attempts=5;
  int guess;
  
  cout << "Guess the secret number (1-10). you have 5 attempts. " << endl;
  
   while(attempts>0)
   {
    cout << "enter your guess:" << endl;
    cin>>guess;
    
    attempts--;
    if (guess == secretnum)
    {
      cout << "your guess is correct."<< endl;
      break;
    }
    else if(attempts==0)
    {
      cout << "sorry you have used all your attempts:" << endl;
    }
    else 
    {
      cout << "Wrong guess! you have "<<attempts<<"attempts left"<< endl;
    } 
   }
 
   return 0;
}