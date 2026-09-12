#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter your first number:";
    cin >> num1;
    cout << "Enter your second number:";
    cin >> num2;
    float profit = num2 - num1;
    if (profit > 0)
    {
        cout << "You made a profit of " << profit << endl;
    }
    else if (profit < 0)
    {
        cout << "You made a loss of " << -profit << endl;
    }
    else
    {
        cout << "You broke even." << endl;
    }
}