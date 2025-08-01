#include <iostream>
using namespace std;
int main ()
{
int i=0, score;
float sum=0;

cout << "Enter the scores of the students to calculate its average.(enter -1 to stop)" << endl;

do
{
 cin >> score;
 
 if(score == -1)
 {
  break;
 }
 if(score > -1)
 {
  sum+=score;
 }
 i++;
 
}while(true);

 
 cout<<"Average = "<<sum/i;
 
 
 
 
 return 0;
}