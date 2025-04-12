#include <iostream>
using namespace std;
int main()
{
 int n, positiveNum=0, negativeNum=0;
 
 do
 {
  cout << "Enter a Number: ";
  cin >> n;
  
  if(n>0)
  {
   positiveNum++;
  }
  if(n<0)
  {
   negativeNum++;
  }
  
 }while(n!=0);
 
 cout << "Positive Numbers: "<<positiveNum << endl;
 cout << "Negative Numbers:"<<negativeNum << endl;
 
  return 0;
}