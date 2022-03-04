#include <iostream>
using namespace std;

int main()
{
    cout << "Description: Converter from Celsius to Fahrenheit w/ user inputs." << endl;
    cout << endl;

    double celsius = 0.0;
    cout << "What's the temperature in Celsius?: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
}