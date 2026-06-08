// wap to print series of armstrong number
//1  153  370 ... 


#include<iostream>
using namespace std ;
int main(){
    int n ;//number of terms 
    cout<<"Enter the number :";
    cin>>n;
    for(int num=1 ; num<=n ; num++){
        int lastdigit;
        int sum=0;
        int temp=num; //cant change num value in while loop
        while(temp!=0){
          lastdigit= temp%10;
          sum=sum+ lastdigit * lastdigit*lastdigit;
          temp=temp/10;

    }
    if(sum==num){
            cout<<num;
    }
    
}

    return 0;
}