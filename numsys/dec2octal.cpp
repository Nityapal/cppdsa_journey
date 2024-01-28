#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b=0,c=0,n;
    cout<<"enter a no. ";
    cin>>n; 
    while(n>0){
        a=n%8;   
        b+=a*(pow(10,c)); 
        n=n/8; 
        c++; 
    }
    cout<<"octal equivalent is "<<b;
}