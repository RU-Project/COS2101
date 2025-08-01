#include <iostream>
using namespace std;

void input(char [99], int &);
bool Palindrome(const char [], int, int, int);

int main()
{
  int i = 0;
  char C[99];

  input(C, i);

  for (int j = 0; j < i; j++)
  {
    cout << C[j];
  }
  
  int mid = (i / 2) + (i % 2);
  if (Palindrome(C, 0, mid, i))
  {
    cout << " is palindrome" << endl;
  }
  else {
    cout << " is not palindrome" << endl;
  }
  
  return 0;
}

void input(char c[99], int &i)
{ 
  char n;

  cout << "Character = ";
  cin >> n;

  while (n != '.')
  {
    c[i] = n;
    i++;
    cin >> n;
  }
}

bool Palindrome(const char c[], int i, int mid, int length)
{
  if (i < mid)
  {
    if (c[i] == c[length - 1 - i])
    {
      return Palindrome(c, i + 1, mid, length);
    } 
    else
    {
      return false;
    } 
  }
  
  return true;
}