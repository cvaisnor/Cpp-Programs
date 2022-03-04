#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Description: Distance to see a lighthouse from a boat w/ user input." << endl;
    cout << endl;

    double h;
    cout << "What's the height of the lighthouse [in feet]: ";
    cin >> h;
    double d = sqrt(0.8 * h);

    cout.setf(ios::fixed);
    cout << setprecision(0);

    cout << "A " << h << " foot tall lighthouse can be seen from " << d << " miles away." << endl;
}