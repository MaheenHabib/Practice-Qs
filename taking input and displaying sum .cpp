#include <iostream>
using namespace std;
int main() 
{ int num;
  int sum=0;

  cout << "Enter any number:" << endl;
 while(true)
 {
  cin>>num;
  sum+=num;
  if (num==0) {
    break;}
     
 }
   cout << sum << endl;
 
   return 0;
}