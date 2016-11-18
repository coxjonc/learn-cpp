#include <stdlib.h>

// Data stored in multiple non-contiguous blocks of memory
// Each node has two fields, one to store the data, and one to store 
// the address of the next node (the LINK to the next node)
// No guarantee that the nodes will be adjacent
// Pointer to node will store the address of the first node. The only 
// identity of the linked list that you keep with you all the time.
// Creating a node is nothing but allocating a memory block

int main () {
  struct Node
  {
    double data;
    Node * link;
  };

  Node * A;
  A = NULL;

  Node * temp = new Node();
  temp->data = 2;
  temp->link = NULL;

  A = temp; // After assigning this, never modify the address of the head node. Create temp vars

  temp = new Node();
  temp -> data = 4;
  temp -> link = NULL;

  Node * temp1 = A;
  while (temp1->link != NULL)
  {
    temp1 = temp1->link;
  }
  temp1->link = temp;

  // Each time you want to create a new node, first create a node (line 11), then
  // traverse the list and, when you reach the end where the link is null assign 
  // the value of the link to the address of the new node you just created
}
