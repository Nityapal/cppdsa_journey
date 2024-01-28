#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a,b=0,c=0,n;
    cin >>n;
    while(n!=0) {
    a=n%10;
    b=(a*pow(2,c))+b;
    n=n/10;
    c++;
}
cout <<"decimal equivalent is "<< b;
}