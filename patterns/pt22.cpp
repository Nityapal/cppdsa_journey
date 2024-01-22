#include <iostream>
using namespace std;

void pattern1(int n){
    int i,j,k;
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
    cout<<"*"<<endl;
    cout<<"no. of rows= "<<((n*2)+1)<<endl;
}
void pattern2(int n){
    int i,j,k,s,t=1;int sp=n-1;
    for(i=1;i<=n;i++){
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
    for(i=n-1;i>=1;i--){
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
    cout<<"no. of rows= "<<((n*2)-1)<<endl;
}

int main(){
    int n;
    cout<<"enter a no.";
    cin>>n;
    pattern1(n);
    cout<<endl;
    pattern2(n);
}