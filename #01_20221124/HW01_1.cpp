/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 1
  TH 24 Nov 2022 @SCL211/1 RU1
  
  1) โปรแกรมหาพื้นที่ของวงกลมและความยาวเส้นรอบวง
*/

#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{

  float D, C, area;
  SetConsoleOutputCP(CP_UTF8);

  cout << "ป้อนขนาดเส้นผ่านศูนย์กลาง" << endl;
  cin >> D;

  C = 3.14 * D;
  area = pow((D / 2), 2) * 3.14;

  cout << "ความยาวของเส้นรอบวง คือ: " << C << endl;
  cout << "พื้นที่ของวงกลม คือ: " << area << endl;

  return 0;
}