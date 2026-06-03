//Write a program to Print prime numbers in a range.

#include<iostream>
using namespace std ;
int main(){

    int n1 ;
    cout<<"Enter the starting number :";
    cin>>n1;
     int n2 ;
    cout<<"Enter the ending number :";
    cin>>n2;
    int num;
    

    for(int num=n1 ; num<n2 ; num++){
        if(num<2){
            continue;
        }
        bool isprime = 1;
        for(int i=2 ; i<num ; i++){
            if(num%i==0){
             isprime=0;
             break;
            }
            else{
             isprime=1;
            }

        }

        if(isprime){
        cout<<num;
    }
}
    
    return 0;
}
