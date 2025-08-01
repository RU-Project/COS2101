#include <iostream>
using namespace std;

struct node
{
  node * llink;
  int data;
  node * rlink;
};

void insertTree(node * &root, int s) {

  if (root == NULL) {
    root = new node;
    root -> llink = NULL;
    root -> data = s; 
    root -> rlink => NULL;
  } else if (s < root -> data) {
    insertTree(root -> llink, s);
  } else {
    insertTree(root -> rlink, s);
  }
}

void preOrder (node * root) {
  if (root != NULL)
  {
    cout << root -> data;
    preOrder(root -> llink);
    preOrder(root -> rlink);
  }
}

void inOrder(node * root) {
  if (root != NULL)
  {
    inOrder(root -> llink);
    cout << root -> data;
    inOrder(root -> rlink);
  } 
}

void postOrder(node * root) {
  if (root != NULL)
  {
    postOrder(root -> llink);
    postOrder(root -> rlink);
    cout << root -> data;
  } 
}

void deleteTree(node * &root, int delData) {
  if (root == NULL) {
    cout << "Not found" << endl;
  } else if (delData < root -> data) {
    deleteTree(root -> llink, delData);
  } else if (delData > root -> data) {
    deleteTree(root -> rlink, delData);
  } else {

    if (root -> llink == NULL) {
      root -> data = root -> llink -> data;
      deleteTree(root -> llink, root -> data);
    } else if (root -> rlink == NULL) {
      root -> data = root -> rlink -> data;
      deleteTree(root -> rlink, root -> data);
    } else { /* โหนดที่ต้องการลบมีทั้ง L&R Subtree*/

      node * temp = Find_min(root -> rlink); // Find_min หาโหนดที่น้อยที่สุดของ R Subtree

      root -> data = temp -> data;
      deleteTree(root -> rlink, root -> data);
    }
  }
}

int main()
{
  node * root;
  insertTree(root, 74);
  insertTree(root, 63);
  insertTree(root, 92);
  insertTree(root, 70);

  return 0; 
}