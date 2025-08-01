#include <iostream>
#include <string>
using namespace std;

int main()
{
  int RL;
  string text, replace, R;

  cout << "text = " << endl; 
  getline(cin, text);

  cout << "replace = ";
  getline(cin, R);

  cout << "text to replace = ";
  getline(cin, replace);

  RL = R.length();

  for (int i = 0; i < text.length(); i++)
  {
    string t;

    for (int j = 0; j < RL; j++)
    {
      if (text[i + j] == R[j])
      {
        t += text[i + j];
      } 
    }

    if (t.length() == RL)
    {
      text.replace(i, RL, replace);
      i += RL;
    } 
  }

  cout << "Change = \n" << text << endl;

  return 0;
}