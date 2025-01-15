#include <iostream>
using namespace std;

struct result{
   int rollno;
   char grade;
};

int main () 
{
    int i=0;
    result list[3]= { { 23, 'A' } , { 15, 'B' } , { 7, 'C' } };
    while (i!=2){
    cout << list[i].rollno << endl;
    cout << list[i].grade << endl;
    
    i++;
    }
}