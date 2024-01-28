#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c=0,n;
    cout<<"enter a no. ";
    cin>>n;
    while(n>0){
        a=n%10;
        b+=a*pow(8,c);
        n=n/10;
        c++;
    }
    cout<<"decimal equivalent is "<<b;
}