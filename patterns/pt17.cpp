#include <iostream>
using namespace std;

int main() {
    
    int i;int j;int k;
    int sp=3;int s;
    for(i=1;i<=4;i++) {
        for(s=1;s<=sp;s++) {
            cout<<" ";
        }
        sp--;
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(k=i-1;k>=1;k--) {
            cout<<k;
        }
        cout<<endl;
    }
}