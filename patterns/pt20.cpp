#include <iostream>
using namespace std;

int main() {
    int i,j,k,s,sp=3,t=1;
    for(i=1;i<=4;i++){
        for(s=1;s<=sp;s++)
        cout<<" ";
        sp--;
        for(j=1;j<=i;j++)
        if(j==1)
        cout<<"*";
        else
        cout<<" ";
        for(k=i-1;k>=1;k--)
        if(k==1)
        cout<<"*";
        else
        cout<<" ";
        cout<<endl;
    }
    for(i=3;i>=1;i--){
        for(s=1;s<=t;s++)
        cout<<" ";
        t++;
        for(j=1;j<=i;j++)
        if(j==1)
        cout<<"*";
        else
        cout<<" ";
        for(k=i-1;k>=1;k--)
        if(k==1)
        cout<<"*";
        else
        cout<<" ";
        cout<<endl;
    }
}