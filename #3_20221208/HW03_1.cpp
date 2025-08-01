/* 
  COS2101 การเขียนโปรแกรมเชิงกระบวนคำสั่ง ครั้งที่ 3
  TH 8 Dec 2022 @SCL211/1 RU1
  
  1)  จงรับเลขจำนวนเต็ม 4 จำนวนใด ๆ ที่เรียงลำดับจากน้อยไปมาก 
      และให้แปลงเป็นเรียงลำดับจากมากไปน้อย
*/

#include <iostream>
using namespace std;

void input(int &, int &, int &, int &);
void swap(int &, int &, int &, int &);
void output(int , int , int , int);

int main()
{
  int a, b, c, d;
  input(a, b, c, d);
  swap(a, d);
  swap(b, c);
  output(a, b, c, d);
  
  return 0;
}

void input(int &a, int &b, int &c, int &d)
{
  cout << "Number 1 = "; cin >> a;
  cout << "Number 2 = "; cin >> b;
  cout << "Number 3 = "; cin >> c;
  cout << "Number 4 = "; cin >> d;
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void output(int a, int b, int c, int d)
{
  cout << "============= " << endl;
  cout << "Number 1 = " << a << endl;
  cout << "Number 2 = " << b << endl;
  cout << "Number 3 = " << c << endl;
  cout << "Number 4 = " << d << endl;
}