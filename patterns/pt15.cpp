#include <iostream>
using namespace std;

int main() {
    
    int i;int j;
    int sp=0;int s;int t=1;
    for(i=13;i>=1;i--) {
        for(s=1;s<=sp;s++) {
            cout<<" ";
        }
        sp++;
        for(j=t;j<=i;j++){
            int v=j;
            cout<<v;
            v++;
        }
        cout<<endl;
        t++;
    }
}