
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // Declare the file stream variable
  ofstream outfile;

  // Open output file
  outfile.open("displayFile.txt");
  if (!outfile.is_open()) {
    cout << "ERROR opening output file";
    return 0;
  }

  // Declare and initialize variables
  int num_floors;
  int num_rooms;
  int occup_rooms;
  int total_rooms = 0;
  int tot_occp = 0;
  int tot_unccp = 0;
  double rate;

  // Ask the user for the number of floors in the hotel
  cout << "\nHow many floors are there in the hotel?\n";
  cin >> num_floors;

  // Validate information enter for the user using while loop
  while (num_floors < 1) {
    cout << "\nERROR. Please enter a number of floors greater than 1?\n";
    cin >> num_floors;
  }

  // Iterate each floor to know the number of rooms and occupied rooms.
  for (int i = 1; i <= num_floors; i++) {
    cout << "\nHow many rooms are there in floor " << i << "?\n";
    cin >> num_rooms;

    // Validate information enter for the user using while loop
    while (num_rooms < 10) {
      cout << "\nERROR. Please enter a number of rooms greater than 10?\n";
      cin >> num_rooms;
    }
    // Store in a variable the total number of rooms
    total_rooms += num_rooms;

    cout << "\nHow many occupied rooms are there in the floor " << i << "? \n";
    cin >> occup_rooms;

    // Validate information enter for the user using while loop
    while (occup_rooms > num_rooms) {
      cout << "ERROR.Please enter a number of occupied floor less than the "
              "number of "
              "rooms\n";
      cin >> occup_rooms;
    }
    // Store in a variable the total number of occupied rooms
    tot_occp += occup_rooms;
  }

  // Calculate the number of unccupied rooms
  tot_unccp = total_rooms - tot_occp;

  // Calculate the hotel rate occupancy
  rate = (double)tot_occp / total_rooms * 100;

  cout << "\nPlease open the displayFile.txt file to review the "
          "results.\nThank you!";

  // Display the results in the outfile file "DisplayFile.txt"
  outfile << "\nThe number of floors in the hotel is " << num_floors;
  outfile << "\nThe number of total rooms in the hotel is " << total_rooms;
  outfile << "\nThe number of total occupied rooms in the hotel is "
          << tot_occp;
  outfile << "\nThe number of total unoccupied rooms in the hotel is "
          << tot_unccp;
  outfile << "\nThe rate of ocuppancy is " << fixed << setprecision(2) << rate
          << "%";

  // Close output file
  outfile.close();

  return 0;
}