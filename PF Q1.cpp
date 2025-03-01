#include <iostream>
using namespace std;
int main()
{
 int n, i=1, sum=0;
 
 cout << "Enter the value of nth term:" << endl; 
 cin>>n;
 
 while(i<=n)
 {
  cout << i <<" * "<< i <<" = "<< i*i<< endl;
  
  sum = sum + i*i;
  
  i++;
 }
  cout << "sum of the above series is:"<< sum << endl;
  
}