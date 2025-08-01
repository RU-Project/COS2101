#include <iostream>
#include <string>
using namespace std;

void input(string [], int &, char);
void findUnionInter(const string [], int, const string [], int, string [], string []);
void findDifference(const string [], int, const string [], int, string []);
void output(const string [], int, string);

int main()
{
  string A[99], B[99];
  int LA = 0, LB = 0, length;

  input(A, LA, 'A');
  input(B, LB, 'B');

  length = LA + LB;
  string U[length], Inter[length], D[LA];

  findUnionInter(A, LA, B, LB, U, Inter);
  findDifference(A, LA, Inter, length, D);

  output(U, length, "Union");
  output(D, LA, "Difference");

  return 0;
}

void input(string set[], int &i, char name)
{
  string n;

  cout << "Set " << name << endl;
  cout << "[" << i + 1 << "] = ";
  cin >> n;

  while (n != "-999")
  {
    set[i] = n;
    i++;
    cout << "[" << i + 1 << "] = ";
    cin >> n;
  }
}

void findUnionInter(const string A[], int LA, const string B[], int LB, string U[], string I[])
{
  int ci = 0, cu = 0;
  string un[LA + LB];

  for (int i = 0; i < LA; i++)
  { 
    un[i] = A[i]; 
  }
  
  for (int i = 0; i < LB; i++)
  { 
    un[LA + i] = B[i];
  }

  for (int i = 0; i < LA + LB; i++)
  {
    bool stt = true;

    for (int j = 0; j < i; j++)
    {
      if (un[i] == U[j])
      {
        stt = false;
      }
    }

    if (stt)
    {
      U[cu] = un[i];
      cu++;
    } else {
      I[ci] = un[i];
      ci++;
    }
  }
}

void findDifference(const string A[], int LA, const string I[], int l, string D[])
{
  int cd = 0;

  for (int i = 0; i < LA; i++)
  {
    bool stt = true;

    for (int j = 0; j < l; j++)
    {
      if (A[i] == I[j])
      {
        stt = false;
      }
    }

    if (stt)
    {

      D[cd] = A[i];
      cd++;
    }
  } 
}

void output(const string A[], int length, string name)
{
  cout << name << " = ";

  for (int i = 0; i < length; i++)
  {
    if (A[i] != "") 
    {
      cout << A[i] << ", ";
    }
  }
  
  cout << endl;
}