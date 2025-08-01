#include <iostream>
#include <string>
using namespace std;

string findBinary(int);

int main()
{
  int decimal;

  cout << "Decimal = ";
  cin >> decimal;
  cout << "Binary = " << findBinary(decimal) << endl;

  return 0;
}

string findBinary(int decimal)
{
  if (decimal != 0)
  { 
    string b = (decimal % 2 == 1) ? "1" : "0";

    return findBinary(decimal / 2) + b;
  }

  return "";
}