#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct student
{
  string id;
  string name;
  int score;
  student *link;
};

void input(student *&);
void output(student *);
void remove(student *&);

int main()
{
  student *first = NULL;

  input(first);
  output(first);
  remove(first);
  output(first);

  return 0;
}

void input(student *&first)
{
  student *p, *pre, *post;
  string id;
  int count = 1;
  
  cout << "Student " << count << endl;
  cout << "ID = ";
  cin >> id;

  while (id != "###")
  {
    p = new student;
    p -> id = id;

    cout << "Name = ";
    cin >> p -> name;

    cout << "Score = ";
    cin >> p -> score;

    p -> link = NULL;

    if (first == NULL)
    {
      first = p;
    } 
    else
    {
      pre = NULL;
      post = first;

      while (post != NULL && post -> id < id)
      {
        pre = post;
        post = post -> link;
      }
      
      if (pre == NULL)
      {
        p -> link = first;
        first = p;
      }
      else
      {
        pre -> link = p;
        p -> link = post;
      }

    }
    
    count++;
    cout << "Student " << count << endl;
    cout << "ID = ";
    cin >> id;
  }
}

void output(student *first)
{
  student * loop = first;
  int i = 1;

  cout << setw(10) << "Student ";
  cout << setw(10) << "ID";
  cout << setw(10) << "Name";
  cout << setw(10) << "Score" << endl;

  while (loop !=  NULL)
  {
    cout << setw(10) << i;
    cout << setw(10) << loop -> id;
    cout << setw(10) << loop -> name;
    cout << setw(10) << loop -> score << endl;

    loop = loop -> link;
    i++;
  }
}

void remove(student *&first)
{
  student *pre, *del;
  string id;
  
  cout << "Delete ID = ";
  cin >> id;

  while (id != "###" && first != NULL)
  {
    pre = NULL;
    del = first;
    
    while (del != NULL && del -> id != id)
    {
      pre = del;
      del = del -> link;
    }
    
    if (pre == NULL)
    {
      first = first -> link;
      delete(del);
      cout << "Deleted" << endl;
    }
    else if (del == NULL)
    {
      cout << "Not Delete" << endl;
    }
    else
    {
      pre -> link = del -> link;
      delete(del);
      cout << "Deleted" << endl;
    }
    
    if (first != NULL)
    {
      cout << "Delete ID = ";
      cin >> id;
    }
  }
}