/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 3
  TH 8 Dec 2022 @SCL211/1 RU1
  
  2)  จงแปลงวินาทีรวม ให้เป็น ชัวโมง นาที และวินาที
      - ทำแบบ Void Function
      - แบ่งเป็น Input Proceed Output
*/

#include <iostream>
#include <windows.h>
using namespace std;

void Input(int &);
void Proceed(int, int &, int &, int &);
void Output(int, int, int, int);

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  int T, H, M, S;

  Input(T);
  Proceed(T, H, M, S);
  Output(T, H, M, S);

  return 0;
}

void Input(int &T)
{
  cout << "วินาทีรวม = ";
  cin >> T;
}

void Proceed(int T, int &H, int &M, int &S)
{
  H = T/3600;
  M = T%3600/60;
  S = T%3600%60;
}

void Output(int T, int H, int M, int S)
{
  cout << T << " วินาที = " << endl;
  cout << H << " ชั่วโมง" << endl;
  cout << M << " นาที" << endl;
  cout << S << " วินาที" << endl;
}