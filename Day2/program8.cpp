//Write a program to Check whether a number is palindrome.
//palindrome means the number and it's reverse are equal 

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int original = n;
    int reverse =0;
    int lastdigit =0;
    while(n!=0){
        lastdigit = n%10 ;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }
    if(reverse==original){
        cout<<"the number is palindrome "<<endl;
    }
    else{
        cout<<"the  number is not palindrome"<<endl;
    }
    return 0;
}