#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int a[4][5];
  int i;
  int j;

  for (i = 0; i < 4; ++i) {
    for (j = 0; j < 5; ++j) {
      cout << "Enter a number: ";
      cin >> a[i][j];

    }
  }
  for (i = 0; i < 4; ++i) {
    for (j = 0; j < 5; ++j) {
      cout << a[i][j];

    }
    cout << endl;
  }
return 0;
}
