#include <iostream>
using namespace std;
int main()
{
  int no, rem;
  scanf("%d",&no);
    
    do {
       rem= no%2;
       no= no/2;
       printf("%d",rem);
    
    }while (no>=1);


     return 0;

}