// write a program to count the digits in a given number 


#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int count = 0 ;
    while(n!=0){
        count++ ;
        n = n/10 ;
    }
    cout<<"the count of the digits is : "<<count<<endl ;
    return 0;
}