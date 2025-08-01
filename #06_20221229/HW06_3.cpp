#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void input(string &);
int findDecimal(string);

int main()
{
  string binary;
  input(binary);
  cout << "Decimal = " << findDecimal(binary) << endl;
  
  return 0;
}

void input(string &b)
{
  char n = '0';;

  cout << "Binary = ";  
  while (n != '.')
  {
    b += n;  
    cin >> n;
  }
}

int findDecimal(string b)
{
  int sum = 0;

  for (int i = 0; i < b.length(); i++)
  {
    sum += (b[i] - '0') * pow(2, b.length() - (i + 1));
  }

  return sum;
}