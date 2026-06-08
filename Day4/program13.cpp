//wap to generate fibonacci series
//0 1 1 2 3 5 8 ....


#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<"  "<<b<<"  ";
    for(int i=2 ; i<=n ; i++){
        int nextnumber= a+b ;
        cout<<nextnumber<<"  ";
        a=b;
        b=nextnumber;
    }

}
