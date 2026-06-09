//Write a program to Recursive reverse number


#include<iostream>
using namespace std;

// global variable to store reversed number
int rev = 0;

// recursive function to reverse number
void reverseNumber(int n) {
    if (n == 0)   // base case
        return;

    rev = rev * 10 + (n % 10);   // take last digit
    reverseNumber(n / 10);       // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverseNumber(n);

    cout << "Reversed number = " << rev;

    return 0;
}