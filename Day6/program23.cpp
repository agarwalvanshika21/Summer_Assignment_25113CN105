//Write a program to Count set bits in a number. //eg = 5 - 101  = 2


#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<" Enter the number : ";
    cin>>n;
    int count =0;
    while (n!=0){
        if(n&1){
            count++;
        }
        n= n>>1;
        
    }
    cout<<count;


}