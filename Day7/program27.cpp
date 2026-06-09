//  Write a program to Recursive sum of digits.


#include<iostream>
using namespace std;

// recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0)   // base case
        return 0;

    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits = " << sumOfDigits(n);

    return 0;
}