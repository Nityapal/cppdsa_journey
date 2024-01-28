#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c=0,n;
    cout<<"enter a no. ";
    cin>>n;
    while(n!=0){
        a=n%10;
        c=c*10+a;
        n=n/10;
    }
        if(c>INT_MAX/10||c<INT_MIN/10)
        return 0;
    cout<<"reverse is "<<c;
}