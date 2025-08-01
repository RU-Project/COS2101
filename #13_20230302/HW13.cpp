#include <iostream>
#include <string>
using namespace std;

struct node {
  char data;
  node * link;
};

void push(node * &, int);
void pop(node * &, int &);
int calculate(string);

int main() {
  string postfix; 

  cout << "Postfix = ";
  cin >> postfix;

  cout << "Sum = " << calculate(postfix) << endl;

  return 0;
}

void push(node * &top, int n) {
  node * p = new node;

  p -> data = n;
  p -> link = NULL;

  if (top != NULL) {
    p -> link = top;
  }

  top = p;
}

void pop(node * &top, int &n) {
  node * temp;

  if (top != NULL) {
    n = top -> data;
    temp = top;
    top = top -> link;
    delete(temp);
  } else {
    cout << "Stack Underflow \n";
  }
}

int calculate(string postfix) {
  
  node * top = NULL;
  int sum, x, y;

  for (int i = 0; i < postfix.length(); i++)
  {
    char e = postfix[i];

    if (e >= '0' && e <= '9') {
      x = e - '0';
      push(top, x);
    } else {

      pop(top, y);
      pop(top, x);

      switch (e) {
        case '*': sum = x * y; break;
        case '/': sum = x / y; break;
        case '+': sum = x + y; break;
        case '-': sum = x - y; break;
      }

      push(top, sum);
    }
  }
  
  return sum;
}