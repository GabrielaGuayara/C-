#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const double FIFTEEN_FEE = 0.15,
               NINE_FEE = 0.09,
               SEVEN_FEE = 0.07,
               FIVE_FEE = 0.05,
               EXTRA_FEE = 10.00;
  
  double starting_bal,
         monthly_charges = 7.00;
  
  int num_checks;

  
  cout << "\nPlease enter your starting balance\n";
  cin >>starting_bal;

  if (starting_bal < 200)
  {
    monthly_charges += EXTRA_FEE; 
    cout<< "\nAn extra fee of $10 will be applied to your account\n";
  }
  else
    cout << "\nNo extra fee will be applied to your account\n";
  

  
  cout << "\nPlease enter the number of checks you have written\n";
  cin >> num_checks;

  
  if (num_checks >=0 && num_checks < 5)
    {
     monthly_charges = (num_checks*FIFTEEN_FEE) + monthly_charges;
    }
  else if (num_checks >= 5 && num_checks <= 10)
    {
     monthly_charges = (num_checks*NINE_FEE) + monthly_charges;
    }
  else if (num_checks >= 11 && num_checks <= 19)
    {
     monthly_charges = (num_checks*SEVEN_FEE) + monthly_charges;
    }
  else
    {
     monthly_charges = (num_checks*FIVE_FEE) + monthly_charges;
    }

  cout << "\nThe monthly bank services is " <<fixed<<setprecision(2)<<monthly_charges;
return 0;
  
}