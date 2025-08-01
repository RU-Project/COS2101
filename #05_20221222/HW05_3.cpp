#include <iostream>
using namespace std;

float findSum(int n)
{
  float sum = 0.0, i = 1.0;

  while (i <= n)
  {
    sum += i / (i + 1);
    i++;
  }

  return sum;
}

int main() {
  int n;

  cout << "n = "; cin >> n;
  cout << "Sum = " << findSum(n) << endl;

  return 0;
}