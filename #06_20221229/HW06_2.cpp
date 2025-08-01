#include <iostream>
using namespace std;

long Factorial1(int);
long Factorial2(int);
long Factorial3(int);
long Permutation(int, int);
long Combination(int, int);

int main()
{
  int n, r;

  cout << "N = "; cin >> n;
  cout << "R = "; cin >> r;

  cout << "Permutation = " << Permutation(n, r) << endl;
  cout << "Combination = " << Combination(n, r) << endl;

  return 0;
}

long Factorial1(int n)
{
  long sum = 1;

  for (int i = n; i > 1; i--)
  {
    sum *= i;
  }

  return sum;
}

long Factorial2(int n)
{
  long sum = 1;
  int i = n;

  while (i > 1)
  {
    sum *= i;
    i--;
  }

  return sum;
}

long Factorial3(int n)
{
  long sum = 1;
  int i = n;

  do
  {
    sum *= i;
    i--;
  } while (i > 1);

  return sum;
}

long Permutation(int n, int r)
{
  return Factorial3(n) / Factorial3((n - r));
}

long Combination(int n, int r)
{
  return Factorial3(n) / (Factorial3((n - r)) * Factorial3(r));
}