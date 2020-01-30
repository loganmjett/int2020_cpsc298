#include <iostream>
using namespace std;

int main(int argc,char **argv) {
  double itemCost;
  int years;
  double rateOfInflation;
  int i;

  cout << "How much does the item cost?: ";
  cin >> itemCost;
  cout << "Enter inflation rate as a %: ";
  cin >> rateOfInflation;
  rateOfInflation = rateOfInflation / 100;
  cout << "How many years until the purchase?: ";
  cin >> years;

  for (i = 0; i <= years; ++i) {
    itemCost = itemCost + (itemCost * rateOfInflation);
  }

cout << "Item cost after " << years << " years is $" << itemCost << endl;

  return 0;
}
