//Write a program to Recursive factorial.


#include<iostream>
using namespace std;

// recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;

    return n * factorial(n - 1);  // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n);

    return 0;
}

