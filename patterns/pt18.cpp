#include <iostream>
using namespace std;

int main() {
    
    int i;int j,a,b,m,n,r,p,y,z;
    int sp=0;int s;int st=3;
    for(y=5;y>=1;y--) {
        for(z=1;z<=y;z++){
            cout<<z;
        }
        cout<<endl;
    }
    // for(a=1;a<=4;a++){
    //     for(s=4;s>=1;s--)
    //         cout<<" ";
    //     sp++;
    //     for (b=1;b<=a;b++)
    //         cout<<"*";
    //     cout<<endl;
    // }
    for(i=1;i<=4;i++) {
        for(s=1;s<=st;s++) {
            cout<<" ";
        }
        st--;
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(m=1;m<=4;m++) {
        for(s=4;s<=1;s--) {
            cout<<" ";
        }
        sp++;
        for(n=1;n<=m;n++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(r=5;r>=1;r--) {
        for(p=r;p>=1;p--){
            cout<<p;
        }
        cout<<endl;
    }
}

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1