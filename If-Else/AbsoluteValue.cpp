#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;
    if(num <0 ){
        cout <<num <<" is a negative number " <<--num <<endl;
    }
    else{
        cout <<num <<" is a positive number " <<num <<endl;
    }
}