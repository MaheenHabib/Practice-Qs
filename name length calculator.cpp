#include <iostream>
using namespace std;

int main()
{
  char st[]="Asad";
  
  int i, count=0;
  for(i=0; st[i]!='\0'; i++)
  {
    count++;
  }
  cout << count << endl;
  return 0;
}