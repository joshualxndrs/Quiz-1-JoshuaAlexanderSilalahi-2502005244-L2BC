#include <iostream>
#include <math.h>

using namespace std;

int sequence(int r, int a, int n)
{
    // BASE CASE //
    // If the operation quotient (n) is == 0, it stops the recursion
    if (n == 0)
        return 1;

    // GENERAL CASE
    // The recursive call or function is made here
    // Keeps on multiplying the previous number with the ratio or interval until it reaches the desired sequence
    else
    {
        cout << a * pow(r, sequence(r, a, n - 1)) << " ";
        return n + 1;
    }
}

int main()
{
    // INITIALIZE VARIABLEs //
    int a, r, n;

    // USER INPUTs //
    cout << "\tGeometric Sequence\n";
    cout << "-------------------------------------------------------";

    cout << "\nEnter first element of the sequence: ";
    cin >> a;
    cout << "Enter the ratio/interval: ";
    cin >> r;
    cout << "How many numbers would you like to print out: ";
    cin >> n;
    cout << endl;

    cout << "Your Geometric Sequence is: " << a << " ";

    // CALLING THE RECURSIVE GEOMETRIC FUNCTION //
    sequence(r, a, n);

    return 0;
}