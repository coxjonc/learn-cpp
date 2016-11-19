#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node * next;
};

Node * Insert(Node * head, int data) {
  Node * temp = new Node();
  temp->data = data;
  temp->next = NULL;
  if (head == NULL) {
    head = temp;
  }
  else {
    Node * temp2 = head;
    while (temp2->next != NULL) temp2 = temp2->next;
    temp2->next = temp;
  }
  return head;

}

void ReversePrint(Node * p) {
  if (p->next == NULL) {
    printf("%d", p->data);
    return;
  }
  Print(p->next);
  printf("%d", p->data);
}

int main() {
  Node * head = NULL;
  head = Insert(head, 1);
  head = Insert(head, 2);
  head = Insert(head, 3);
  head = Insert(head, 4);
  ReversePrint(head);
  return 0;
}

