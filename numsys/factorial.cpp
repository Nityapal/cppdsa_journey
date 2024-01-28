#include <iostream>
using namespace std;

int main() {
    int f=1;int n;
    cout<<"enter a no. ";
    cin>>n;
    if(n<0)
    cout<<"factorial of a negative no. doesn't exist";
    else{
    for(int i=1;i<=n;i++) 
       f=f*i;
    cout<<"factorial is "<<f;
}
}

