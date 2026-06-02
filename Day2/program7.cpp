//Write a program to Find product of digits of a given number 

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int product = 1;
    int lastdigit =0;
    while(n!=0){
        lastdigit = n%10 ;
        product = product*lastdigit;
        n=n/10;
    }
    cout<< "the reverse of the given number is : "<<product<<endl;
    return 0;
}