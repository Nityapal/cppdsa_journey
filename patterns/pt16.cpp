#include <iostream>
using namespace std;

int main() {
    
    int i;int j;int t=1;
    int sp=0;int s;
    for(i=5;i>=1;i--) {
        for(s=1;s<=sp;s++) {
            cout<<" ";
        }
        sp++;
        for(j=t;j<=5;j++){
            cout<<j;
        }
        t++;
        cout<<endl;
    }
}