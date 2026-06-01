//write a program to calculate the sum of first n natural numbers

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int sum=0;
    for(int i=0 ; i<=n ; i++){
        sum=sum+i ;
    }
    cout<<"Sum of the first natural numbers is : "<<sum;
    return 0;
}