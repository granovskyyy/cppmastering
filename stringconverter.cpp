#include <iostream>
#include <string>
using namespace std;

int main()
{
    string equation;
    cout << "Enter equation you would like to solve: ";
    cin >> equation;
    string x1, x2;
    int sol = 0;
    for (int i = 0; i < equation.size(); i++)
    {
        if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/')
        {
            x1 = equation.substr(0, i);
            x2 = equation.substr(i + 1);

            int a = stoi(x1);
            int b = stoi(x2);

            switch (equation[i])
            {
                case '+':
                    sol = a + b;
                    break;
                case '-':
                    sol = a - b;
                    break;
                case '*':
                    sol = a * b;
                    break;
                case '/':
                    if (b == 0) {
                        cout << "Error: division by zero!" << endl;
                        return 1;
                    }
                    sol = a / b;
                    break;
                default:
                    cout << "Wrong operator!" << endl;
                    return 1;
            }
            cout << "Result: " << sol << endl;
            return 0; 
        }
    }
    cout << "No operator found in the equation!" << endl;
    return 1;
}