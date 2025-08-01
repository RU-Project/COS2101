/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 1
  TH 24 Nov 2022 @SCL211/1 RU1
  
  3)  โปรแกรมหาส่วนลดของการซื้อสินค้าและเงินจ่ายสุทธิ โดยกำหนดให้ลด 5% ของราคาสินค้าทั้งหมด
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
  float price, discount, total;

  SetConsoleOutputCP(CP_UTF8);

  cout << "ป้อนราคารวมของสินค้า" << endl;
  cin >> price;
  
  discount = price * 0.05;
  total = price * 0.95;

  cout << "ราคารวมทั้งหมด " << price << " บาท" << endl;
  cout << "ได้รับส่วนลด " << discount << " บาท" << endl;
  cout << "ราคาสุทธิคือ " << total << " บาท" << endl;

  return 0;
}