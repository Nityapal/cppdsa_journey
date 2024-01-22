#include <iostream>
using namespace std;

int main() {
    
    int i;int j;
    int sp=4;int s;
    for(i=1;i<=5;i++) {
        for(s=1;s<=sp;s++) {
            cout<<" ";
        }
        sp--;
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}