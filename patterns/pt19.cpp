#include <iostream>
using namespace std;

int main() {
    int i,j,k,n;
    cout<<"enter a positive no. ";
    cin>>n;
    cout<<"*"<<endl;
    for(i=1;i<=n;i++){
        cout<<"*";
        for(j=1;j<=i;j++)
        cout<<j;
        for(k=i-1;k>=1;k--)
        cout<<k;
        cout<<"*"<<endl;
    }
    for(i=n-1;i>=1;i--){
        cout<<"*";
        for(j=1;j<=i;j++)
        cout<<j;
        for(k=i-1;k>=1;k--)
        cout<<k;
        cout<<"*"<<endl;
    }
    cout<<"*";
}

// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *