#include <iostream>
using namespace std;
int main() 
{ 
  int marks;
  cout << "Enter your marks(0-100):" << endl;
  cin >> marks;
  
  if(marks>=90)
  {
  cout << "A Grade" << endl;
  }
  else if(marks>=80)
   {
   cout << "Grade B" << endl;
   } 
  
  else if(marks>=70)
   {
   cout << "Grade C" << endl;
   }
   
  else 
    cout << "FAIL" << endl;

    return 0;
}