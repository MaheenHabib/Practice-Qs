#include <iostream>
#include <cmath>   // For sq root and power ftns
#include <cstdlib> // For system("cls") to clear the screen
using namespace std;

int main() {
    double num1, num2, result;
    char op, repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') 
    {
        system("cls");  // Clears the console screen

        cout << "Enter first number:"<<endl;
        cin >> num1;
        cout << "Enter an operator (+, -, *, /, ^ for power, r for square root, % for percentage, c to clear screen):"<<endl;
        cin >> op;

        if (op == 'r') 
        { // Square root
            cout << "Square root of " << num1 << " is: " << sqrt(num1) << endl;
        }
         
        else if (op == '%') 
        { // Percentage calculation
            cout << "Enter percentage value:"<<endl;
            cin >> num2;
            result = (num1 * num2) / 100;
            cout << num2 << "% of " << num1 << " is: " << result << endl;
        }
        
         else if (op == 'c') 
         { // Clear screen
            continue; // Simply goes to the next loop iteration to clear the screen
         }
          
         else if (op == '+')
         {
            cout << "Enter second number:"<<endl;
            cin >> num2;
            result = num1 + num2;
            cout<<"Result:"<<result<<endl;
         }     
         else if (op == '-') 
         {
            cout << "Enter second number:"<<endl;
            cin >> num2;
            result = num1 - num2;
            cout<<"Result:"<<result<<endl;
         }
            
         else if (op == '*') 
         {  
            cout << "Enter second number:"<<endl;
            cin >> num2;
            result = num1 * num2;
            cout<<"Result:"<<result<<endl;
         }
             
         else if (op == '/') 
         {  
            cout << "Enter second number:"<<endl;
            cin >> num2;
             if (num2 != 0) 
               {
                  result = num1 / num2;
                  cout <<"Result:"<< result << endl;
               }
             else
               {
                  cout << "Error! Division by zero."<<endl;
                  continue;
               }
         }
            
         else if (op == '^')
         { // Exponentiation (Power)
            cout << "Enter second number:"<<endl;
            cin >> num2;
            result = pow(num1, num2);
            cout << "Result:" << result << endl;
         } 
          
         else 
         {
            cout << "Invalid operator! Try again."<<endl;
            continue;
         }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> repeat;
    }

    cout << "Goodbye!" << endl;

    return 0;
}