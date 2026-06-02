//Write a program to Find sum of digits of a number 

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int sum = 0 ;
    int lastdigit = n%10 ;
    while(n!=0){
        sum= sum + lastdigit  ;   //gives last digit
        n=n/10 ;             // removes last digit
    }
    cout<<"the sum of the digits of a given number is :  "<<sum <<endl ;
    return 0;
}