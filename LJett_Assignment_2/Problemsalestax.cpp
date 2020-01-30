#include <iostream>
using namespace std;

double addTax(double taxRate, double cost) {
  taxRate = taxRate / 100.0;
  cost = cost + (cost * taxRate);

  return cost;
}

int main(int argc, char **argv) {
  double tax;
  double itemCost;
  double totalCost;

  cout << "Enter tax rate: ";
  cin >> tax;
  cout << endl << "Enter cost of item: ";
  cin >> itemCost;

  totalCost = addTax(tax, itemCost);
  cout << "Total cost is: $" << totalCost << endl;
  return 0;
}
