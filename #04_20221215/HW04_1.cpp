/*
  ? 1.  จงเขียนฟังก์ชันตรวจสอบตัวเลข 
  *     - กรณีเป็นเลขจำนวนบวก จะส่งค่า 1 กลับไปยังจุดเรียกใช้
  *     - กรณีเป็นเลขจำนวนลบ จะส่งค่า -1 กลับไปยังจุดเรียกใช้ 
  *     - กรณีเป็นเลขจำนวนศูนย์ จะส่งค่า 0 กลับไปยังจุดเรียกใช้
*/

#include <iostream>
using namespace std;

int findSgn(int);

int main()
{
  int n;

  cout << "N = "; cin >> n;
  cout << "sgn = " << findSgn(n) << endl;

  return 0;
}

int findSgn(int n)
{
  if (n > 0)
  {
    return 1;
  }
  else if (n < 0)
  {
    return -1;
  }
  else
  {
    return 0;
  }
}