#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

struct product
{
  string id;
  string name;
  float price;
  int amount;
};
string id[5];

void addProduct(product item[5]);
void sortProduct(product item[5]);
int search(string, int, int);
void sell(product item[5]);
void productList(product item[5]);

int main()
{
  char menu;
  product item[5];

  addProduct(item);

  do
  {
    cout << "Menu\n";
    cout << "[A] Add product\n";
    cout << "[S] Sell\n";
    cout << "[L] Product list\n";
    cout << "[E] End\n";
    cout << "Select A/S/L/E\n";
    cin >> menu;

    switch (menu)
    {
      case 'a': case 'A': addProduct(item); break;
      case 's': case 'S': sell(item); break;
      case 'l': case 'L': productList(item); break;
    }
  } while (menu != 'E' && menu != 'e');

  return 0;
}

void addProduct(product item[5])
{
/**/
  for (int i = 0; i < 5; i++)
  {
    cout << "Product " << i + 1 << endl;

    cout << "ID = ";
    cin >> item[i].id;
    id[i] = item[i].id;

    cout << "Name = ";
    cin >> item[i].name;

    cout << "Price = ";
    cin >> item[i].price;

    cout << "Amount = ";
    cin >> item[i].amount;
    
    cout << endl;
  }
/**/

/*
  for (int i = 0; i < 5; i++)
  {
    item[i].id = "A00" + to_string(i + 1);
    id[i] = item[i].id;
    item[i].name = "A" + to_string(i + 1);
    item[i].price = 500 + i;
    item[i].amount = i + 5;
  }
  cout << "Add product success\n";
*/
  
  sortProduct(item);
}

void sortProduct(product item[5])
{
  product sorts[5];

  sort(begin(id), end(id));
  for (int i = 0; i < 5; i++)
  {
    int pos = search(item[i].id, 0, 4);
    sorts[pos] = item[i];
  }
  
  for (int i = 0; i < 5; i++)
  {
    item[i] = sorts[i];
  }
}

int search(string key, int first, int last)
{
  int mid = (first + last) / 2;

  if (first > last)
  {
    return -1;
  }
  else if (key == id[mid])
  {
    return mid;
  }
  else if (key < id[mid])
  {
    return search(key, first, mid - 1);
  }
  else
  {
    return search(key, mid + 1, last);
  }
}

void sell(product item[5])
{
  int list[5] = {0}, total = 0;
  char menu;

  do
  {
    int pos, amount;

    do
    {
      string key;

      cout << "Product ID = ";
      cin >> key;

      pos = search(key, 0, 4);
      cout << pos << endl;
      if (pos == -1)
      {
        cout << "Product not found\n";
      }

    } while (pos == -1);
    
    cout << "\n--------------\n";
    cout << "\nProduct detail\n";

    cout << setw(3) << "ID"; 
    cout << setw(10) << "Name";
    cout << setw(10) << "Price"; 
    cout << setw(10) << "Amount\n";

    cout << setw(5) << item[pos].id; 
    cout << setw(8) << item[pos].name;
    cout << setw(8) << item[pos].price; 
    cout << setw(8) << item[pos].amount;

    cout << "\n\n--------------\n\n";

    do
    {
      cout << "Amount = ";
      cin >> amount;

      if (amount > item[pos].amount)
      {
        cout << "Not enough products\n";
      }
      
    } while (amount > item[pos].amount);
    
    list[pos] += amount;
    item[pos].amount -= amount;
    
    cout << "[A] Add item\n" << "[S] Summary\n";
    cout << "Select A/S\n";
    cin >> menu;

  } while (menu == 'A' || menu == 'a');
  
  if (menu == 'S' || menu == 's')
  {
    cout << "--------------\n\n";
    cout << "Order summary\n";

    cout << setw(5) << "ID"; 
    cout << setw(10) << "Name";
    cout << setw(10) << "Amount";
    cout << setw(10) << "Price";
    cout << setw(10) << "Total\n";

    for (int i = 0; i < 5; i++)
    {
      if (list[i] > 0)
      {
        cout << setw(5) << item[i].id; 
        cout << setw(10) << item[i].name;
        cout << setw(10) << list[i];
        cout << setw(10) << item[i].price;
        cout << setw(10) << item[i].price * list[i] << endl;
        total += item[i].price * list[i];
      }
    }
    
    cout << "\n______________\n";
    cout << "\n Total = " << total << endl;
    cout << "\n--------------\n";
  }

  cout << "Thank you\n";
}

void productList(product item[5])
{
  cout << "\n--------------\n";
  cout << "\nProducts\n";
  cout << setw(4) << "ID"; 
  cout << setw(10) << "Name";
  cout << setw(10) << "Price"; 
  cout << setw(10) << "Amount\n";
  
  for (int i = 0; i < 5; i++)
  {
    cout << setw(5) << item[i].id; 
    cout << setw(8) << item[i].name;
    cout << setw(10) << item[i].price; 
    cout << setw(8) << item[i].amount << endl;
  }
  
  cout << "\n--------------\n";
}