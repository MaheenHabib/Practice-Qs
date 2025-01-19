#include <iostream>
#include <string.h>
using namespace std;

 struct student 
 {
   int id;
   char name[20];
   float percent;
 };
  
  struct student func(void);
  
  int main()
  {
    struct student record = func();
    
    cout << "ID is : "<<record.id<< endl;
    cout << "Name is : "<<record.name << endl;
    cout << "Percentage is : "<<record.percent << endl;
    return 0;
  }
 
 struct student func(void)
 { struct student s;
   cout << "Enter your ID" << endl;
   cin >> s.id;
   cout << "Enter your Name" << endl;
   cin >> (s.name,20);
   cout << "Enter your Percentage" << endl;
   cin >> s.percent;
   return(s);
 }