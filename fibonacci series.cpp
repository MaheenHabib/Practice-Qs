#include <iostream>
using namespace std;
int main ()
{
 int num, t1=0, t2=1, i=2, nextterm;
 
 cout << "Enter the number to create its fibbonacci series:" << endl;
 cin >> num;
 
 cout << "fibboncci series : "<<t1<<", "<<t2;
 
 while(i<=num)
 {
  nextterm = t1+t2;
  
  cout <<", "<< nextterm;
  
  t1=t2;
  t2=nextterm;
  
  i++;
 
 }
 
   return 0;
}