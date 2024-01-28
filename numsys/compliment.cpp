#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i,j,k,a,b,m,c=0,p=0,n;
    cout<<"enter a no. ";
    cin>>n;
    while(n>0){
        i=n%2;
        a+=i*pow(10,c);
        n=n/2;
        c++;
    }
    cout<<a<<endl;
        while(a>0){ 
            j=n%10;
            m=~j;
            b=b+(10*m);
            a=a/10;
        }
    cout<<b<<endl;    
}