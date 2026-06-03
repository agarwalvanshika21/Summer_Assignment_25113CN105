//Write a program to Check whether a number is prime.

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    bool isprime = 1;
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            isprime=0;
            break;
        }
        else{
            isprime=1;
        }

    }
    if(isprime){
        cout<<"the number is prime"<<endl;
    }
    else{
        cout<<"the number is not prime"<<endl;
    }
    
    return 0;
}
