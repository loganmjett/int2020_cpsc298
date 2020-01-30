#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int numberArray[10];
  int i;

  for (i = 0; i < 10; ++i) {
     cout << "Enter an integer for the array: ";
     cin >> numberArray[i];
  }

  for (i = 0; i < 10; ++i) {
    cout << "Your int is: " << numberArray[i] << endl;
  }
  return 0;
}
