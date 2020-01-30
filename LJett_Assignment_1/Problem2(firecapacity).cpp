#include <iostream>
using namespace std;

int main(int argc, char **) {
  int roomCap = 0;
  int totPeople = 0;

  cout << "Enter room capacity: ";
  cin >> roomCap;
  cout << endl << "Enter meeting attendence: ";
  cin >> totPeople;

  if (totPeople <= roomCap) {
    cout << "Legal meeting. " << roomCap - totPeople << " more can be present to remain legal." << endl;
  }
  else {
    cout << "Illegal meeting. " << totPeople - roomCap << " people must be excluded to become legal." << endl;
  }

  return 0;
}
