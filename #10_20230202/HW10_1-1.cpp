#include <iostream>
using namespace std;

void input(char [99], int &);
bool Palindrome(const char[], int);

int main()
{
  int i = 0;
  char C[99];

  input(C, i);

  for (int j = 0; j < i; j++)
  {
    cout << C[j];
  }
  
  if (Palindrome(C, i))
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

bool Palindrome(const char c[], int length)
{
  bool status = true;
  int mid = (length / 2) + (length % 2);

  for (int i = 0; i < length; i++)
  {
    if (c[i] != c[length - 1 - i])
    {
      status = false;
    }
  }

  return status;
}