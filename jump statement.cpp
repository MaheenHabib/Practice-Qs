#include <iostream>
using namespace std;

int main()
{
	cout<< "Start of Program."<<endl;
	
	jump:                                
	cout<< "Jumped to this line!"<<endl;
		
	goto jump;                     // Jump to the label 'jump'
	
	cout<< "This line is skipped."<<endl;
	
	
	return 0;
}
