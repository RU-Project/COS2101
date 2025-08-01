#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n = 1, r = 0, c = 0, score, scores[5][5] = {0}, grades[3] = {0};
  float total = 0.0;
  char grade[3] = {'G', 'P', 'F'};

  cout << "Score " << n << " = ";
  cin >> score;

  while (score != -999 && n <= 25)
  {
    total += score;
    scores[r][c] = score;

    if (score > 79)
    {
      grades[0]++;
    } 
    else if (score > 59)
    {
      grades[1]++;
    }
    else
    {
      grades[2]++;
    }

    n++;
    if (c == 4)
    {
      c = 0;
      r++;
    } else
    {
      c++;
    }

    cout << "Score " << n << " = ";
    cin >> score;
  }

  cout << "Average Score = " << total / (n - 1.0) << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "Grade " << grade[i] << " = " << grades[i] << endl;
  }

  /*
    for (r = 0; r < 5; r++)
    {
      for (c = 0; c < 5; c++)
      {
        cout << setw(3) << scores[r][c];
      }

      cout << endl;
    }
  */
  
  return 0;
}