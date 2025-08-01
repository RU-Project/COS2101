/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 2
  TH 1 Dec 2022 @SCL211/1 RU1
  
  2)  จงเขียน Function หาค่าของ 
      y = (-b + sqrt(b^2 - 4ac)) / 2a
      y = (-b - sqrt(b^2 - 4ac)) / 2a

  ข้อมูลทดสอบ
    a = 1 || b = 1 || c = -6 || y(+) = +2 || y(-) = -3

*/

#include <iostream>
#include <cmath>
using namespace std;

float YPositive(float, float, float);
float YNegative(float, float, float);

int main()
{
  float a, b, c, yP, yN;

  cout << "A = "; cin >> a;
  cout << "B = "; cin >> b;
  cout << "C = "; cin >> c;

  yP = YPositive(a, b, c);
  yN = YNegative(a, b, c);

  cout << "Y = " << yP << ", " << yN << endl;
  return 0;
}

float YPositive(float a, float b, float c)
{
  return (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
}

float YNegative(float a, float b, float c)
{
  return (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
}