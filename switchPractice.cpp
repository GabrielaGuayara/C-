#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Declare the integer variable.
  int num_bks;

  // Ask the customer to enter the number of books purchased.
  cout << "Please enter the number of books you purchased this month\n";
  cin >> num_bks;

  // Use while loop to avoid that the customer enter negative values.
  while (num_bks < 0) {
    cout << "\nPlease enter a positive number of books you purchased this "
            "month\n";
    cin >> num_bks;
  }

  /* Use switch statement to calculated and display the number of
     points awarded.*/
  switch (num_bks) {
  case 0:
    cout << "\nYou have earned 0 points\n";
    break;
  case 1:
  case 2:
    cout << "\nCongratualations!!! You have earned 10 points\n";
    break;
  case 3:
    cout << "\nCongratualations!!! You have earned 15 points\n";
    break;
  case 4:
  case 5:
    cout << "\nCongratualations!!! You have earned 20 points\n";
    break;
  default:
    cout << "\nCongratualations!!! You have earned 30 points\n";
  }

  return 0;
}