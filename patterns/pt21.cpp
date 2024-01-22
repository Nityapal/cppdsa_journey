#include <iostream>
using namespace std;

int main(){
    int i,j,k,s,t=1,a,b=1,c=1;
    int n;
    cout<<"enter a no. ";
    cin>>n;
    int sp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        cout<<"*";
        for(s=n-1;s>=t;s--)
        cout<<" ";
        t++;
        for(s=sp;s>=1;s--)
        cout<<" ";
        sp--;
        for(k=1;k<=i;k++)
        cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=i;j>=1;j--)
        cout<<"*";
        for(a=1;a<=b;a++)
        cout<<" ";
        b++;
        for(a=1;a<=c;a++)
        cout<<" ";
        c++;
        for(k=i;k>=1;k--)
        cout<<"*";
        cout<<endl;
    }
    cout<<"no. of rows= "<<((n*2)-1)<<endl;
}