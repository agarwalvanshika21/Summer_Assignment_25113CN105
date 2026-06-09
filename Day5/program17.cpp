// Write a program to Check perfect number.
// equals to sum of its proper divisors

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<" Enter the number  ";
    cin>>n;
    int sum=0;
    for(int i=1 ; i<n ; i++){
        if(n%i==0){
            sum = sum+ i;

        }
    }
    if(sum==n){
        cout<<"it is a perfect number" ;
    }
    else{
        cout<<"it is not a perfect number" ;
    }
    return 0;
}
