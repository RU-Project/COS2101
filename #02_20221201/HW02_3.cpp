/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 2
  TH 1 Dec 2022 @SCL211/1 RU1
  
  3)  จงหาส่วนลด (10%) ของการซื้อสินค้าและจำนวนจ่าสุทธิ โดยให้สร้างเป็น Function
      - findDiscount
      - findVat
      - findNet
*/

#include <iostream>
#include <windows.h>
using namespace std;

float findDiscount(float);
float findVat(float, float);
float findNet(float, float);

int main()
{
  float price, discount, vat;

  SetConsoleOutputCP(CP_UTF8);

  cout << "ป้อนราคารวมของสินค้า = "; cin >> price;

  discount = findDiscount(price);
  vat = findVat(price, discount);
  
  cout << "ราคารวมทั้งหมด : " << price << " ฿" << endl;
  cout << "ส่วนลด (10%) : " << discount << " ฿" << endl;
  cout << "VAT (7%) : " << vat << " ฿" << endl;
  cout << "ราคาสุทธิ : " << findNet(price, vat) << " ฿" << endl;

  return 0;
}

float findDiscount(float price)
{
  return price * .10;
}

float findVat(float price, float discount)
{
  return (price - discount) * .07;
}

float findNet(float price, float vat)
{
  return price + vat;
}