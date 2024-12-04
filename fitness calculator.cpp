#include <iostream>
using namespace std;
int main ()
{
  int i, step[i], avg, totalsteps;
  cout<<"Enter the number of steps for each day in a week:"<<endl;
  for (i=0;i<=6;i++)
  {
  cin>>step[i];
   totalsteps+=i;
   if (step[i]<1000)
    { 
     cout<<"Your activity is below average for day"<<i<<endl;
    }
  }
   avg=totalsteps/7;
   cout<<"Average steps forr the week:"<<avg<<endl;
   return 0;
}

