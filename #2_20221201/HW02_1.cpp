/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 2
  TH 1 Dec 2022 @SCL211/1 RU1
  
  1) จงเขียน Function แปลง หลา ฟุต และ นิ้ว ให้เป็นจำนวนนิ้วรวม
*/

#include <iostream>
#include <windows.h>
using namespace std;

int yardToInch(int);
int footToInch(int);

int main() 
{
  int yard, foot, inch, total;

  SetConsoleOutputCP(CP_UTF8);

  cout << "ป้อนจำนวนหลา : "; cin >> yard;
  cout << "ป้อนจำนวนฟุต : "; cin >> foot;
  cout << "ป้อนจำนวนนิ้ว : "; cin >> inch;

  total = yardToInch(yard) + footToInch(foot) + inch;

  cout << "จำนวนนิ้วรวมมีค่า = " << total << " นิ้ว" << endl;

  return 0;
}

int yardToInch(int yard)
{
  return yard * 36;
}

int footToInch(int foot)
{
  return foot * 12;
}