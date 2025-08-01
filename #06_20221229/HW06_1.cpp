#include <iostream>
using namespace std;

void print(int n)
{
  int x = 1;

  for (int i = n; i >= 1; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << x << " ";
      x++;
    }
    cout << endl;
  }
}

int main()
{
  int n;

  cout << "n = ";
  cin >> n;
  print(n);

  return 0;
}