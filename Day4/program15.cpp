//wap to check armstrong number 
//153 = 1*3 +5*3 +3*3
 
#include<iostream>
#include <cmath>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int lastdigit;
    int sum=0;
    int temp=n;
    while(n!=0){
        lastdigit= n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10 ;
    }
    if(sum==temp){
        cout<<"the number is armstrong"<<endl;
    }
    else{
        cout<<"the number is not armstrong"<<endl;
    }
    return 0;
}