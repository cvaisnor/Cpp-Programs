#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Description: Mortgage payment calculator w/ user inputs." << endl;
    cout << endl;
    
    int p = 0;
    cout << "What's the amount of the loan [in whole dollars]: $";
    cin >> p;

    int monthsPerYear = 12;
    int years = 30;

    double annualRate = 0.0;
    cout << "What's the annual percent interest rate: ";
    cin >> annualRate;

    double r = (annualRate / 100) / monthsPerYear;
    
    int n = monthsPerYear * years;

    double mortgagePayment = ((p * pow(1 + r, n) * r) / (pow(1 + r, n) - 1));

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);

    cout << endl;
    cout << "Amount borrowed (user input): $" << p << endl;
    cout << "Annual interest rate (user input): " << (annualRate) << "%" << endl;
    cout << "Payback period (programmer input): " << years << " Years" << endl;
   
    cout << "Monthly payment (calculated output): $" << mortgagePayment << endl;
}