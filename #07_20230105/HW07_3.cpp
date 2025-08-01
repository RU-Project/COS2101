#include <iostream>
#include <string>
using namespace std;

int main()
{
  string key = "12345", guess;
  int po = 0, C;

  while (po < 5)
  {
    po = 0; C = 0;

    cout << "guess = "; 
    cin >> guess;

    for (int i = 0; i < key.length(); i++)
    {
      if (key.find(guess[i]) <= 5)
      {
        C++;
      }
      if (guess[i] == key[i])
      {
        po++;
      }
    }

    cout << "correct guess " << C << " number ";
    cout << "and " << po << " positions" << endl;
  }

  cout << "Game over" << endl;
}