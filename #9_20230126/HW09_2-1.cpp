#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
  int n;
  SetConsoleOutputCP(CP_UTF8);

  cout << "จำนวนพนักงานทั้งหมด = ";
  cin >> n;

  int sales[n][13] = {0}, group[4][n], count[4] = {0}, max[2] = {-1, 0};
  string name[n];
  string g[4][2] = {
    {"เกิน 100 คัน", "8"},
    {" 80 - 99", "5"},
    {" 50 - 79", "3"},
    {"ต่ำกว่า 50", "1"}
  };
  string month[12] = {
    "มกราคม", "กุมภาพันธ์", "มีนาคม", "เมษายน",
    "พฤษภาคม", "มิถุนายน", "กรกฎาคม", "สิงหาคม",
    "กันยายน", "ตุลาคม", "พฤศจิกายน", "ธันวาคม",
  };

  for (int i = 0; i < n; i++)
  {
    // ** เก็บข้อมูล ** //
    cout << "ชื่อของพนักงานคนที่ " << i + 1 << ": " << endl;
    cin >> name[i];
    cout << "ยอดขายเดือน" << endl;

    for (int m = 0; m < 12; m++)
    {
      cout << month[m] << " = ";
      cin >> sales[i][m];

      sales[i][12] += sales[i][m];
    }

    cout << "ยอดขายรวมของคุณ " << name[i] << " คือ " << sales[i][12] << endl;

    // ** เช็คยอดขายสูงสุด ** //
    if (sales[i][12] > max[1])
    {
      max[0] = i;
      max[1] = sales[i][12];
    }
    
    // ** จัดกลุ่มของพนักงาน ** //
    int c = 3;

    if (sales[i][12] > 99)
    {
      c = 0;
    }
    else if (sales[i][12] > 79)
    {
      c = 1;
    }
    else if (sales[i][12] > 49)
    {
      c = 2;
    }
    
    group[c][count[c]] = i;
    count[c]++;
  }
  
  cout << "พนักงานที่ทำยอดขายรวมได้สูงสุดคือคุณ " << name[max[0]] << endl;
  cout << "ทำยอดขายได้ทั้งหมด " << max[1] << " คัน" << endl;

  for (int i = 0; i < 4; i++)
  {
    cout << "พนักงานที่ทำยอดขายรถได้" << g[i][0] << " คัน (ได้โบนัส " << g[i][1] ;
    cout << " เดือน) มีทั้งหมด " << count[i] << " คน";

    if (count[i] > 0) {
      cout << " ได้แก่ " << endl;
    }

    for (int j = 0; j < count[i]; j++)
    {
      cout << j + 1 << ". คุณ " << name[group[i][j]] << endl;
    }
  }
  
  return 0;
}