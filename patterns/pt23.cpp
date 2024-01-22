#include <iostream>
using namespace std;

int main(){
    int i,j,k;int n;
    cout<<"enter no. of rows ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        for(k=0;k<j;k++){
            cout<<k;
        }
        }
    cout<<endl;
}
}

// 1  
// 2 9 
// 3 8 10
// 4 7 11 14
// 5 6 12 13 15