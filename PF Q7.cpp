#include <iostream>
using namespace std;
int main()
{
 int i, n, sum=0;
 
 cout << "Enter the length of the array: ";
 cin >> n;
 
 int arr1[n], arr2[n];
 
 for(i=0; i<n; i++)
 {
  cout << "Enter the number at place "<<i+1<< endl;
  cin >> arr1[i];
 }
 
 for(i=0; i<n; i++)
 {
  arr2[i]=arr1[i];
 }
 cout << "The elements stored in the first array: "<<endl;
 for(i=0; i<n; i++)
 {
  cout << arr1[i]<<" ";
 }
 cout << endl;
 
 cout << "The elements stored in the second array: "<<endl;
 for(i=0; i<n; i++)
 {
  cout << arr2[i]<<" ";
  if(arr1[i]%2==0)
  {
   sum+=arr1[i];
  }
 }
 cout << endl;
 
 cout << "Sum= "<<sum << endl;
 
  return 0;
}