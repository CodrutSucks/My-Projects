#include <iostream>
using namespace std;

int
main ()
{
  
 
 
double a;
  
char operand;
  
double b;
  
double ans;
  
 
cout << "Number1: ";
  
cin >> a;
  
cout << "Operator: ";
  
cin >> operand;
  
cout << "Number2: ";
  
cin >> b;
  
 
if (operand == '+')

ans = a + b;
  
 
 
if (operand == '-')
    
ans = a - b;
  
 
 
if (operand == '/')
    
ans = a / b;
 
 
if (operand == '*')
      
ans = a * b;
	
cout << "This is the answer and question alongside the answer.     " << a << " " << operand << " " << b << " = " << ans;

return 0;

}
