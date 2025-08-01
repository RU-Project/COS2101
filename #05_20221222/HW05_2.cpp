#include <iostream>
#include <string>
using namespace std;

string findOctal(int);

int main()
{
  int decimal;

  cout << "Decimal = "; 
  cin >> decimal;
  cout << "Octal = " << findOctal(decimal);

  return 0;
}

string findOctal(int d) {
  string octal = "";

  do
  {
    switch (d % 8)
    {
      case 0: octal = "0" + octal; break;
      case 1: octal = "1" + octal; break;
      case 2: octal = "2" + octal; break;
      case 3: octal = "3" + octal; break;
      case 4: octal = "4" + octal; break;
      case 5: octal = "5" + octal; break;
      case 6: octal = "6" + octal; break;
      case 7: octal = "7" + octal; break;
    }

    d /= 8;

  } while (d != 0);

  return octal;
}