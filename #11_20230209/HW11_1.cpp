#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int group[3][100], count[3] = {0};
string types[3] = {"Computer", "Math", "Stat"};

struct book
{
  string id;
  string name;
  string type;
  float price;
};

void input(book item[])
{
  int i = 0;

  cout << "Book no."<< i + 1 << endl;
  cout << "ID = ";
  cin >> item[i].id;

  while (item[i].id != "###" && i < 100)
  {
    cout << "Name = ";
    cin >> item[i].name;

    int G;
    char T;

    cout << "Type" << endl;
    cout << "[C] Computer" << endl;
    cout << "[M] Math" << endl;
    cout << "[S] Stat" << endl;
    cout << "Please select C/M/S" << endl;
    cin >> T;

    switch (T)
    {
      case 'c': case 'C': G = 0; break;
      case 'm': case 'M': G = 1; break;
      case 's': case 'S': G = 2; break;
    }
    
    item[i].type = types[G];
    group[G][count[G]] = i;
    count[G]++;

    cout << "Price = ";
    cin >> item[i].price;

    i++;
    cout << "Book no."<< i + 1 << endl;
    cout << "ID = ";
    cin >> item[i].id;
  }
}

void output(book item[])
{
  float total[3] = {0.0};
    
  cout << "\n--------------" << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << "\n" << i + 1 << ". " << types[i] << endl;
    cout << "ID" << setw(10) << "Name";
    cout << setw(10) << "Price" << endl;

    for (int j = 0; j < count[i]; j++)
    {
      int C = group[i][j];
      cout << item[C].id << setw(10) << item[C].name;
      cout << setw(10) << item[C].price << endl;
      total[i] += item[C].price;
    }

    cout << "Total price = " << total[i] << endl;
    cout << "\n--------------" << endl;
  } 

  cout << "\nTotal price = " << total[0] << " + ";
  cout << total[1] << " + " << total[2] << " = ";
  cout << total[0] + total[1] + total[2] << endl;
}

int main()
{
  book item[100];

  input(item);
  output(item);

  return 0;
}