#include <iostream>
using namespace std;

float calculateAverage(int marks[], int size);

int main ()
{
  int size;
  cout << "Enter size: " << endl;
  cin>>size;
  
  int studentMarks[size];
  
  for (int i = 0; i<size; i++)
  {
   cout << "Enter Marks "<<i+1<<":"<< endl;
   cin >>studentMarks[i];
  }
   cout<<"Marks entered:"<<endl;
   
  for (int i=0; i<size; i++)
   {
    cout << "Student "<<i+1<<"="<<studentMarks[i]<< endl;
   }
   
  float avg = calculateAverage(studentMarks, size);
  cout << "Your Average is: " <<avg;
  return 0;
 }
 float calculateAverage(int marks[], int size){
 int sum = 0;
 for (int i=0; i<size; i++)
 {
  sum+=marks[i];
 }
 cout << "your sum is " <<sum<< endl;
 return (float)sum/size;
 }