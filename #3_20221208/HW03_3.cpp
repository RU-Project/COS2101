/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 3
  TH 8 Dec 2022 @SCL211/1 RU1
  
  3)  จงสร้าง Function ในการหาพื้นที่ของวงกลม และความยาวเส้นรอบวง 
      โดยสร้างเป็น Function ย่อย
*/

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void Input(float &);
void findArea(float, float &);
void findCircum(float, float &);
void Output(float, float);

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  
  float R, area, length;
  
  Input(R);
  findArea(R, area);
  findCircum(R, length);
  Output(area, length);

  return 0;
}

void Input(float &R)
{
  cout << "ความยาวรัศมี = ";
  cin >> R;
}

void findArea(float R, float &A)
{
  A = pow(R, 2) * 3.14;
}

void findCircum(float R, float &L)
{
  L = R * 2 * 3.14;
}

void Output(float A, float L)
{
  cout << "พื้นที่ของวงกลม = " << A << endl;
  cout << "ความยาวของเส้นรอบวง = " << L << endl;
}