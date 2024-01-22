#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i=1;char ch='D';
    while(i<=n) {
      int j=1;char c=ch;
      while (j<=i)
      {
        cout << c;
        j++;c++;
      }
      cout << endl;
      i++;ch--;
    }
    return 0;
}