#include <iostream>
using std::cout, std::cin, std::string, std::endl;

class calculator
{
    public:
        int num1;
        int num2;
        int choice;
};
        
int main()
{   

 calculator calc;
    
 cout << "choose first number: " << " \n";
 cin >> calc.num1;

 cout << "choose second number: " << " \n";
 cin >> calc.num2;

 cout << "choose operand: 1 = add | 2 = subtract | 3 = multiply " << " \n";
 cin >> calc.choice;

 double result1, result2, result3;

if(calc.choice == 1 || 2 || 3)
{

     switch (calc.choice)
 {
    case 1:
       result1 = calc.num1 + calc.num2;
       cout << calc.num1 << " + " << calc.num2 << " = " << result1;
    break;

    case 2:
       result2 = calc.num1 - calc.num2;
       cout << calc.num1 << " - " << calc.num2 << " = " << result2;
    break;

    case 3:
       result3 = calc.num1 * calc.num2;
       cout << calc.num1 << " * " << calc.num2 << " = " << result3;
    break;
 }
}
else{
    cout << "Invalid operand. ";
}
    cout << " \n";
    system("PAUSE");
    return 0;
};
