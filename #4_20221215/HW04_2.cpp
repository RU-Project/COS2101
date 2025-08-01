/*
  ? 2.  จงเขียน โปรแกรมคิดค่าน้ำ โดยป้อนเลขมิเตอร์ใหม่ และมิเตอร์เดือนที่แล้วทางแป้นพิมพ์ 
  ?   โดยให้หาค่าน้ำที่ต้องจ่ายจากอัตราดังนี้

  ?   จำนวนมิเตอร์ที่ใช้ (ยูนิค)          อัตราจ่าย (บาทต่อยูนิค)
  ?         0-20                          15 บาท
  ?         21-50              ส่วนที่เกิน 20 คิดยูนิคละ 20 บาท
  ?         51-100             ส่วนที่เกิน 50 คิดยูนิคละ 25 บาท
  ?         >100               ส่วนที่เกิน 100 คิดยูนิคละ 30 บาท

*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int input(string);
int findPrice(int);

int main()
{
  int oldMeter, newMeter, total, price;

  SetConsoleOutputCP(CP_UTF8);

  newMeter = input("เลขมิเตอร์ใหม่ = ");
  oldMeter = input("เลขมิเตอร์เดือนที่แล้ว = ");

  total = newMeter - oldMeter;
  cout << "ค่าน้ำที่ต้องจ่าย = ฿" << findPrice(total) << endl;

  return 0;
}

int input(string text)
{
  int meter;

  cout << text; 
  cin >> meter;

  return meter;
}

int findPrice(int total)
{
  if (total <= 20)
  {
    return total * 15;
  } 
  else if (total <= 50)
  {
    return 300 + (total - 20) * 20;
  } 
  else if (total <= 100)
  {
    return 900 + (total - 50) * 25;
  }
  else
  {
    return 2150 + (total - 100) * 30;
  }
}