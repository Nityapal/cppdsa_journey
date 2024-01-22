#include <iostream>
using namespace std;

// ABC
// BCD
// DEF

int main() {
    
    int n;
    cin >> n;
    
    int i=1;char c='A';
    while(i<=n) {
      int j=1;char ch=c;
      while (j<=n)
      {
        cout << ch++;
        j++;
      }
      cout << endl;
      i++;c++;
    }
    return 0;
}