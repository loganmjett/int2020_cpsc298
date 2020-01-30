#include "CPSC298Utils.h"

CPSC298Utils::CPSC298Utils() {

}
 /*
 #include <iostream>
using namespace std;

class CPSC298Utils {
  public:
    CPSC298Utils();
    int countVowels(string input);
  private:
    // no private variables
};
*/
int CPSC298Utils :: countVowels(string input) {
  int count = 0;
    char c = '\0';
    for (int i =0; i < input.size(); ++i) {
      c = tolower(input[i]);

      if (c == 'a') {
        count++;
      }
      else if (c == 'e') {
        count++;
      }
      else if (c == 'i') {
        count++;
      }
      else if (c == 'o') {
        count++;
      }
      else if (c == 'u') {
        count++;
      }
    }
    return count;
}

/*
int main(int argc, char ** argv) {
  CPSC298Utils cp;

  cout << cp.countVowels("Logan") << endl;

  CPSC298Utils *cp = new CPSC298Utils();
  cout << "ON THE HEAP" << cps->countVowels("Logan") << endl;

  delete cps;
  return 0;
}
*/
