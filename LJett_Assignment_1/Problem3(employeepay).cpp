#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  double payRate = 16.00;
  double payRateOT = 24.00;
  double hoursWk;
  double grossPay;
  double netPay;

  cout << endl;
  cout << "How many hours of work this week?" << endl;
  cin >> hoursWk;

  if (hoursWk > 40.0) {
    grossPay = (hoursWk - 40.0) * payRateOT;
    grossPay = grossPay + (40.0 * payRate);
  }
  else {
    grossPay = hoursWk * payRate;
  }
  cout << "Gross pay: $" << grossPay << endl;

  double socSec = grossPay * 0.06;
  double fedIncomeTax = grossPay * 0.14;
  double stateIncomeTax = grossPay * 0.05;
  double medInsurance = 10.00;

  cout << "Withholding: " << endl;
  cout << "Social security - $" << socSec << endl;
  cout << "Federal Income Tax - $" << fedIncomeTax << endl;
  cout << "State Income Tax - $" << stateIncomeTax << endl;
  cout << "Medical Insurance - $" << medInsurance << endl;

  netPay = grossPay - (socSec + fedIncomeTax + stateIncomeTax) - medInsurance;

  cout << "Net pay: $" << netPay << endl;
  cout << endl;

}
