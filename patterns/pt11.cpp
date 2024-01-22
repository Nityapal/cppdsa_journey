#include <iostream>
using namespace std;

int main() {
    
    int i;int j;
    
    for(i=1;i<=5;i++) {
        for(j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }
    for(i=4;i>=1;i--) {
        for(j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
    }
