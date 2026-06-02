//write a program to reverse a number 

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int reverse = 0;
    int lastdigit =0 ;
    while(n!=0){
        lastdigit = n%10 ;
        reverse = lastdigit +reverse*10  ;
        n=n/10;
    }
    cout<< "the reverse of the given number is : "<<reverse<<endl;
    return 0;
}