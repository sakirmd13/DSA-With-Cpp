#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "Enter your number:";
    cin >> num;
    int number = int(num);
    if (num == number)
    {

        cout << num << " is an integer" << endl;
    }
    else
    {
        cout << num << " is not an integer" << endl;
    }
}