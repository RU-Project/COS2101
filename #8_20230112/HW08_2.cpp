#include <iostream>
using namespace std;

void input(int A[], int &i)
{
  int n;

  cout << "N [" << i + 1 << "] = ";
  cin >> n;

  while (n != -999)
  {
    A[i] = n;
    i++;
    cout << "N [" << i + 1 << "] = ";
    cin >> n;
  }
}

void proceed(int A[], int l)
{
  int n, p, b;

  cout << "\nN = "; 
  cin >> n;

  do
  {
    cout << "Position = "; 
    cin >> p;

    if (p < 0 || p >= l)
    {
      cout << "Out of size" << endl;
    }

  } while (p < 0 || p >= l);
  
  for (int i = p; (i <= l && i < 99); i++)
  {
    b = A[i];
    A[i] = n;
    n = b;
  }
}

int main()
{
  int A[99], i = 0;

  input(A, i);
  proceed(A, i);

  for (int j = 0; j <= i; j++)
  {
    cout << "[" << j + 1 << "] = " << A[j] << endl;
  }

  return 0;
}