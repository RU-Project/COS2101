/*
  ? 3. จงเขียนโปรแกรมรับวัน เดือน ปี ปัจจุบัน และวัน เดือน ปี เกิดของบุคคลใด ๆ
  ?    และหาอายุของบุคคลคนนี้ว่ามีอายุเท่ากับกี่ปี กี่เดือน
*/

#include <iostream>
#include <string>
using namespace std;

void input(string, int &, int &, int &);

int main()
{
  int C_Day = 22, C_Month = 12, C_Year = 2565;
  int B_Day = 29, B_Month = 11, B_Year = 2506;
  int year, month, day;

  // input("Current day", C_Day, C_Month, C_Year);
  // input("Birthday", B_Day, B_Month, B_Year);

  year = C_Year - B_Year;
  month = C_Month - B_Month;
  day = C_Day - B_Day;

  if (month == 0)
  {
    if (day < 0)
    {
      year -= 1;
      month = 11;
      day += 30;
    }
  } else if (day < 0)
  {
    month -= 1;
    day += 30;
  }

  cout << "Age = " << year << " Year "; 
  cout << month << " Month "; 
  cout << day << " Day" << endl; 

  return 0;
}

void input(string text, int &D, int &M, int &Y)
{
  cout << text << endl; 
  cout << "DD = "; cin >> D;
  cout << "MM = "; cin >> M;
  cout << "YYYY = "; cin >> Y;
}