#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i,a,c=0,n;
    cout<<"enter a no. ";
    cin>>n;
    i=n;
    while(n>0){
        a=n%10;
        c=c*10+a;
        n=n/10;
    }
    cout<<"reverse no. is "<<c<<endl;
    if(i==c)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    if(c>INT_MAX/10||c<INT_MIN/10)
        return 0;
}