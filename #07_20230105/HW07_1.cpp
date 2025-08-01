#include <iostream>
#include <string>
using namespace std;

void proceed(string, int &, int &, int &, int &, int &, int &);

int main()
{
  string message;
  int A = 0, E = 0, I = 0, O = 0, U = 0, Ot = 0;

  cout << "typing some message" << endl;
  getline(cin, message);

  proceed(message, A, E, I, O, U, Ot);

  cout << "A = " << A << endl; 
  cout << "E = " << E << endl; 
  cout << "I = " << I << endl; 
  cout << "O = " << O << endl; 
  cout << "U = " << U << endl; 
  cout << "Other = " << Ot << endl;

  return 0;
}

void proceed(string msg ,int &A, int &E, int &I, int &O, int &U, int &Ot)
{
  for (int i = 0; i < msg.length(); i++)
  {
    switch (msg[i])
    {
      case 'A': case 'a': A++; break;
      case 'E': case 'e': E++; break;
      case 'I': case 'i': I++; break;
      case 'O': case 'o': O++; break;
      case 'U': case 'u': U++; break;

      case '0': case '1': case '2': case '3':
      case '4': case '5': case '6': case '7':
      case '8': case '9': case ' ': break;

      default: Ot++; break;
    }
  }
}