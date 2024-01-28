#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;int i,j,c=0,a,ans=0;
    cout<<"enter a no. ";
    cin>>n; //10
    while(n>0){
       j=n%2;
       a=pow(10,c);
       ans+=j*a;
       n=n/2;
       c++;
    }
    cout<<"binary equivalent is "<<ans;
}