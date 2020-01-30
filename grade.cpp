#include <iostream>
using namespace std;

int main(){

  int numGrade;
  cout << "Enter a grade: ";
  cin >> numGrade;

  if (numGrade >= 90) {
    cout << "A" << endl;
  }
  else if (numGrade >= 80) {
    cout << "B" << endl;
  }
  else if (numGrade >= 70) {
    cout << "C" << endl;
  }
  else {
    cout << "F" << endl;
  }


  return 0;
}
