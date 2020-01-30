#include "CPSC298Utils.h"

int main(int argc, char ** argv) {
  CPSC298Utils cp;

  cout << "ON THE STACK" << cp.countVowels("Logan") << endl;

  CPSC298Utils *cps = new CPSC298Utils();
  cout << "ON THE HEAP" << cps->countVowels("Logan") << endl;

  delete cps;
  return 0;
}
