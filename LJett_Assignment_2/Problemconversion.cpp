#include <iostream>
using namespace std;

void userInput() {
  int feet;
  int inches;

  cout << "Enter feet: ";
  cin >> feet;
  cout << endl << "Enter inches: ";
  cin >> inches;
  cout << endl;
}

void impToMet(int feet, int inches) {
  inches = inches + (feet * 12);
  double inchesToMeters = (0.3048 / 12) * inches;
  double meters = inchesToMeters / 100.0;
  double centimeters = inchesToMeters - (meters *  100.0);
  }

void consoleOutput(double meters, double centimeters) {
  cout << "You have " << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main(int argc, char **argv) {
  userInput();
  impToMet(feet, inches);
  consoleOutput(meters, centimeters);

  return 0;
}
