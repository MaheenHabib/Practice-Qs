#include <iostream>
using namespace std;

//recursive function
int factorial(int n)
{   if(n<=1)
    {
        return 1;
    }

    return n * factorial(n-1);
}

int main()
{
    int num;
cout<<"enter a number to find its factorial"<<endl;
cin>>num;
factorial(num);
}