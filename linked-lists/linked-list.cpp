#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node {
  int data;
  Node * next;
};

Node * head;

Node * GetNode (int i)
{
  int j = 0;
  Node * p = head;

  while (j < i) {
    p = p->next;
    j++;
  }

  return p;
}


void Insert (int x, int i)
{
  Node * p = GetNode(i-1);

  Node * temp = new Node();
  temp->next = p->next;
  temp->data = x;

  p->next = temp;
}


void Append (int x)
{
  Node * p = head;

  while (p->next != NULL)
  {
    p = p->next;
  }

  Node * temp = new Node();
  temp->data = x;
  temp->next = NULL;

  p->next = temp;
}


int main () {
  Node * temp = new Node();
  temp->next = NULL;
  temp->data = 2;

  head = temp;

  Append(42);
  Insert(69, 1);
  Insert(100, 2);

  cout << "Got value: ";
  
  Node * value = GetNode(3);
  cout << value->data << endl;

  return 0;
}
