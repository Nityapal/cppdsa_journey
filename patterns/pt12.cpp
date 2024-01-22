#include <iostream>
using namespace std;

int main() {
    
    int i;int j;
    int sp=0;int s;
    for(i=5;i>=1;i--) {
        for(s=1;s<=sp;s++) {
            cout<<" ";
        }
        sp++;
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}