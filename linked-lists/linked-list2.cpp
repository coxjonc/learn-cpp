#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node * next;
};

Node * head;

void Insert(int data, int n) {
  Node * temp = new Node();
  temp->data = data;
  temp->next = NULL;
  if (n == 1) {
    temp->next = head;
    head = temp;
    return;
  }

  Node * temp2 = head;
  for (int i=1; i<n-2; i++) {
    temp2 = temp2->next;
  }
  temp->next = temp2->next;
  temp2->next = temp;
  return;
}

void Delete(int n) {
  Node * temp = head;
  for (int i=0; i<n-1; i++) {
    temp = temp->next;
  }

  return;
}

void Print() {
  Node * temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    temp = temp->next;
  }
  return;
}

int main(){
  head = NULL;
  Insert(9, 1);
  Insert(10,2);
  Insert(11,2);
  Insert(12,1);
  Print();
  return 0;
}

