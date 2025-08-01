#include <iostream>
#include <string>
using namespace std;

string findHex(int);

int main()
{
  int decimal;

  cout << "Decimal = "; 
  cin >> decimal;
  cout << "Hexadecimal = " << findHex(decimal);

  return 0;
}

string findHex(int d) {
  string hex = "";

  do
  {
    switch (d % 16)
    {
      case 0: hex = "0" + hex; break;
      case 1: hex = "1" + hex; break;
      case 2: hex = "2" + hex; break;
      case 3: hex = "3" + hex; break;
      case 4: hex = "4" + hex; break;
      case 5: hex = "5" + hex; break;
      case 6: hex = "6" + hex; break;
      case 7: hex = "7" + hex; break;
      case 8: hex = "8" + hex; break;
      case 9: hex = "9" + hex; break;
      case 10: hex = "A" + hex; break;
      case 11: hex = "B" + hex; break;
      case 12: hex = "C" + hex; break;
      case 13: hex = "D" + hex; break;
      case 14: hex = "E" + hex; break;
      case 15: hex = "F" + hex; break;
    }

    d /= 16;

  } while (d != 0);

  return hex;
}