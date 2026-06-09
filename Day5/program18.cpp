//strong number 
// equals to sum of the fact of each digits like 145



#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<" Enter the number  ";
    cin>>n;
    int temp =n ;
    int sum =0;
    int ld;
    while(n!=0){
        ld = n%10 ;
        int fact=1;
        for(int i=1 ; i<=ld; i++){
            fact=fact*i ;
        }
    sum=sum+fact ;
    n=n/10;
}
    if(sum==temp){
        cout<<"it is a strong number" ;
    }
    else{
        cout<<"it is not a strong number" ;
    }
    return 0;
}