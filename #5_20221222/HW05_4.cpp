#include <iostream>
using namespace std;

void findResult(int &, int &, int &, int &);

int main()
{
  int sumOdd = 0, numOdd = 0, sumEven = 0, numEven = 0;
  
  findResult(sumOdd, numOdd, sumEven, numEven);

  cout << "sum of even = " << sumEven << endl;
  cout << "number of even = " << numEven << endl;
  cout << "sum of odd = " << sumOdd << endl;
  cout << "number of odd = " << numOdd << endl;

  return 0;
}

void findResult(int &SO, int &NO, int &SE, int &NE)
{
  int n, i = 1;
  do
  {
    cout << "N" << i << " = "; cin >> n;
    i++;

    if (n % 2 == 0)
    {
      SE += n;
      NE++;
    } 
    else 
    {
      SO += n;
      NO++;
    }

  } while (i < 11);
}