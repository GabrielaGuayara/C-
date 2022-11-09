#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int mul;

  for (int a=1;a<=10; a++)
  {
    cout<<"_";
    cout<<a<<"_";
  }
     cout<<"\n";
  for (int i = 1; i <= 10; i++) 
        {
          cout<<i<<"|";
          for (int y = 1; y <= 10; y++) 
          {
            mul = i * y;
            cout <<setw(4)<<mul;
          }
      cout<<"\n";
        }

  return 0;
}