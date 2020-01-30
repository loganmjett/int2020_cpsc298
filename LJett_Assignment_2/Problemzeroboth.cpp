#include <iostream>
using namespace std;

void zeroBoth(int &x, int &y){
  x = 0;
  y = 0;
}

int main(int argc, char **argv) {
  int one = 12345;
  int two = 6789;

  zeroBoth(one,two);
}
