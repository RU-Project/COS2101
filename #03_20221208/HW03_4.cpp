/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 3
  TH 8 Dec 2022 @SCL211/1 RU1
  
  4) จงหาดอกเบี้ยทบต้นของเงินฝากประจำ 1 ปี
      - void Input(float &, float &);
      - float findInterest(float, float);
      - void findCompound(float, float, float &);
      - void Output(float, float, float);
*/

#include <iostream>
#include <windows.h>
using namespace std;

void Input(float &, float &);
float findInterest(float, float);
void findCompound(float, float, float &);
void Output(float, float, float);

int main()
{
  float deposit, rate, interest, compound;

  Input(deposit, rate);
  interest = findInterest(deposit, rate);
  findCompound(deposit, interest, compound);
  Output(deposit, interest, compound);

  return 0;
}

void Input(float &D, float &R)
{
  cout << "จำนวนเงินฝาก : "; cin >> D;
  cout << "อัตตราดอกเบี้ย : "; cin >> R;
}

float findInterest(float D, float R)
{
  return D * (R / 100);
}

void findCompound(float D, float I, float &C)
{
  C = D + I;
}

void Output(float D, float I, float C)
{
  cout << "เงินฝาก : " << D << endl;
  cout << "ดอกเบี้ยเงินฝากสุทธิ : " << I << endl;
  cout << "ดอกเบี้ยทบต้น : " << C << endl;
}