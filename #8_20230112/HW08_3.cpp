#include <iostream>
#include <cmath>
using namespace std;

void input(int A[], int &i, float &mean)
{
  int n;
  float sum = 0.0;

  cout << "N [" << i + 1 << "] = ";
  cin >> n;

  while (n != -999)
  {
    A[i] = n;
    sum += n;
    i++;
    cout << "N [" << i + 1 << "] = ";
    cin >> n;
  }

  mean = sum / i;
}

void findFrequency(const int A[], int n, int F[][2], int &c)
{
  for (int i = 0; i < n; i++)
  {
    bool stt = true;

    for (int j = 0; j <= i; j++)
    { 
      if (A[i] == F[j][0])
      {
        stt = false;
        F[j][1]++;
      }
    }

    if (stt)
    {
      F[c][0] = A[i];
      F[c][1] = 1;
      c++;
    }
  }
}

void findFx(int Fi[][2], int length, float mean, float &sum)
{
  for (int i = 0; i < length; i++)
  {
    sum += Fi[i][1] * pow((Fi[i][0] - mean), 2);
  }
}

int main()
{
  int A[99], i = 0, Fc = 0;
  float mean, Fx = 0, SD;

  input(A, i, mean);

  int Fi[i][2];
  findFrequency(A, i, Fi, Fc);
  findFx(Fi, Fc, mean, Fx);
  SD = sqrt(Fx / i);

  cout << "Mean = " << mean << endl;
  cout << "Standard Deviation = " << SD << endl;

  return 0;
}