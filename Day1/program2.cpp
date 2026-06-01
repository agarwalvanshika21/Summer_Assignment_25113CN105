//write a program to print multiplication table of a given number 

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int product=1 ;
    for(int i=1 ; i<=10 ; i++){
        product = n*i;
        cout<<n<<"*"<<i<<"="<<product <<endl ;
    }
    return 0;
}