#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            cout << "Invalid operator";
            return 0;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result;

    return 0;
}
