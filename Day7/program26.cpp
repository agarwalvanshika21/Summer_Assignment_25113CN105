//Write a program to Recursive Fibonacci. 


#include<iostream>
using namespace std;

// recursive function for fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;   // base case 1
    if (n == 1) return 1;   // base case 2

    return fibonacci(n - 1) + fibonacci(n - 2);  // recursive case
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}