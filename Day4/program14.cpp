//wap to find nth fibonacci term
//0 1 1 2 3 5 8 ....


#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;

    if(n==0){
        cout<<"the nth fibonacci term is 0 ";
        return 0 ;
    }
    if(n==1){
        cout<<"the nth fibonacci term is 1 ";
        return 0 ;
    }

    int a=0;
    int b=1;
    for(int i=2 ; i<=n ; i++){
        int nextnumber= a+b ;
        a=b;
        b=nextnumber;
    }
    cout<<"the nth fibonacci term is "<<b ;
    return 0 ;

}
