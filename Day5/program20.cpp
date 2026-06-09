//wap to print largest prime fctor = biggest prime number that divides it exactly
// keep div by smallest factors the last  one is the ans
// every number is made up of prime factors
//eg 60/30/15/5/1

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number :";
    cin >> n;
     //prime factor
    int smallest = 2;
    int largest = 0;

    while(n > 1) {
        if(n % smallest == 0) {
            largest = smallest;
            n = n / smallest;
        }
        else {
            smallest++; //3 4 5 6....
        }
    }

    cout << largest;

    return 0;
}