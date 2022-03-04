#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Description: Ammortization savings plan w/ user inputs. " << endl;
    cout << endl;

    int years = 0;
    cout << "How many years until retirement? [whole number]: ";
    cin >> years;

    int D = 0;
    cout << "What's the monthly deposit? [whole number]: ";
    cin >> D;

    double annualRate = 0.0;
    cout << "What's the annual interest rate? [percent]: ";
    cin >> annualRate;

    double p = (annualRate / 100) / 12;
    double T = years * 12;
    double S = D * ((pow(1+p, T) - 1) / p);

    cout << endl;
    cout << "In " << years << " years at " << annualRate << "%, $";
    cout << D << " deposited per month will grow to $";

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
}