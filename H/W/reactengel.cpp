// Take length and breadth of a rectangle as input and write a program to find the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main (){
    float length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter)
    
    {
        cout << "The area of the rectangle is greater than its perimeter."<<area << endl;
    }
    else
    {
        cout << "The area of the rectangle is not greater than its perimeter." << perimeter << endl;
    }
}