#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  double metricTon = 35273.92;
  double cerealOz = 0.0;

  cout << "Enter a cereal box weight in ounces: " << endl;
  cin >> cerealOz;
  double cerealWeight = cerealOz / metricTon;
  cout << "This cereal is " << cerealWeight << " metric tons." << endl;
  double numBoxes = metricTon / cerealOz;
  cout << "It would take " << numBoxes << " to make a metric ton." << endl;


  return 0;
}
